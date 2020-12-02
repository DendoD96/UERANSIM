/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.choices.RRC_SetupRelease_PDCCH_BlindDetection;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_PhysicalCellGroupConfig__ext3 extends RRC_Sequence {

    public RRC_SetupRelease_PDCCH_BlindDetection pdcch_BlindDetection;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "pdcch-BlindDetection" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "pdcch_BlindDetection" };
    }

}