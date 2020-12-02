/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_SRS_ResourceSetId;

public class RRC_SRS_Config__srs_ResourceSetToReleaseList extends RRC_SequenceOf<RRC_SRS_ResourceSetId> {

    @Override
    public Class<RRC_SRS_ResourceSetId> getItemType() {
        return RRC_SRS_ResourceSetId.class;
    }

}