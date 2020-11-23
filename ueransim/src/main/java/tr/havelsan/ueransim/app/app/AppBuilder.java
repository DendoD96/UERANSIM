/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.app.app;

import tr.havelsan.ueransim.app.app.monitor.LoadTestMonitor;
import tr.havelsan.ueransim.app.app.monitor.MonitorTask;
import tr.havelsan.ueransim.app.utils.ConfigUtils;
import tr.havelsan.ueransim.utils.console.BaseConsole;
import tr.havelsan.ueransim.utils.console.Log;
import tr.havelsan.ueransim.utils.console.Logger;

import java.io.File;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.StandardOpenOption;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;

public class AppBuilder {

    private static final AtomicBoolean isBuilt = new AtomicBoolean(false);
    private final List<MonitorTask> monitorTasks;

    public AppBuilder() {
        this.monitorTasks = new ArrayList<>();
    }

    //======================================================================================================
    //                                          MUTATORS
    //======================================================================================================

    public AppBuilder addMonitor(MonitorTask monitor) {
        this.monitorTasks.add(monitor);
        return this;
    }

    //======================================================================================================
    //                                          BUILDER
    //======================================================================================================

    public UeRanSim build() {
        if (isBuilt.getAndSet(true))
            throw new RuntimeException("already built");

        new File("logs").mkdir();

        ConfigUtils.loggingToFile(Logger.GLOBAL, Logger.GLOBAL.getLoggerName(), true);
        Log.registerLogger(Thread.currentThread(), Logger.GLOBAL);

        var loadTestConsole = createLoadTestingConsole();

        monitorTasks.add(new LoadTestMonitor(loadTestConsole));

        return new UeRanSim(monitorTasks);
    }

    private BaseConsole createLoadTestingConsole() {
        var loadTestConsole = new BaseConsole();
        loadTestConsole.setStandardPrintEnabled(false);
        loadTestConsole.addPrintHandler(str -> {
            final Path path = Paths.get("logs/loadtest.log");
            try {
                Files.write(path, str.getBytes(StandardCharsets.UTF_8),
                        Files.exists(path) ? StandardOpenOption.APPEND : StandardOpenOption.CREATE);
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        });
        loadTestConsole.printDiv();
        return loadTestConsole;
    }
}
