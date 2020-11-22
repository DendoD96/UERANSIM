/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.app.gnb;

import tr.havelsan.ueransim.app.app.UeRanSim;
import tr.havelsan.ueransim.app.common.configs.GnbConfig;
import tr.havelsan.ueransim.app.common.contexts.GnbAmfContext;
import tr.havelsan.ueransim.app.common.simctx.GnbSimContext;
import tr.havelsan.ueransim.app.gnb.app.GnbAppTask;
import tr.havelsan.ueransim.app.gnb.gtp.GtpTask;
import tr.havelsan.ueransim.app.gnb.mr.MrTask;
import tr.havelsan.ueransim.app.gnb.ngap.NgapTask;
import tr.havelsan.ueransim.app.gnb.sctp.SctpTask;
import tr.havelsan.ueransim.app.utils.ConfigUtils;
import tr.havelsan.ueransim.itms.ItmsId;
import tr.havelsan.ueransim.itms.nts.NtsTask;
import tr.havelsan.ueransim.utils.console.Log;

public class GnbNode {

    public static GnbSimContext createContext(UeRanSim sim, GnbConfig config) {
        var ctx = new GnbSimContext(sim, "gnb-" + config.gnbId);
        ctx.config = config;

        // Create AMF gNB contexts
        {
            for (var amfConfig : ctx.config.amfConfigs) {
                if (amfConfig.guami == null) {
                    throw new RuntimeException("amfConfig.guami == null");
                }

                var amfGnbCtx = new GnbAmfContext(amfConfig.guami);
                amfGnbCtx.host = amfConfig.host;
                amfGnbCtx.port = amfConfig.port;

                ctx.amfContexts.put(amfGnbCtx.guami, amfGnbCtx);
            }
        }

        return ctx;
    }

    public static void run(GnbSimContext ctx) {
        ctx.logger = ConfigUtils.createLoggerFor(ctx.nodeName);

        var tasks = new NtsTask[]{
                new SctpTask(ctx),
                new NgapTask(ctx),
                new MrTask(ctx),
                new GnbAppTask(ctx),
                new GtpTask(ctx),
        };

        ctx.nts.registerTask(ItmsId.GNB_TASK_SCTP, tasks[0]);
        ctx.nts.registerTask(ItmsId.GNB_TASK_NGAP, tasks[1]);
        ctx.nts.registerTask(ItmsId.GNB_TASK_MR, tasks[2]);
        ctx.nts.registerTask(ItmsId.GNB_TASK_APP, tasks[3]);
        ctx.nts.registerTask(ItmsId.GNB_TASK_GTP, tasks[4]);

        for (var task : tasks) Log.registerLogger(task.getThread(), ctx.logger);
        for (var task : tasks) task.start();
    }
}
