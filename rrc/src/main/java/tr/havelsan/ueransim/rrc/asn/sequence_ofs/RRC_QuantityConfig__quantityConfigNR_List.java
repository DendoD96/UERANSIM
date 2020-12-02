/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_QuantityConfigNR;

public class RRC_QuantityConfig__quantityConfigNR_List extends RRC_SequenceOf<RRC_QuantityConfigNR> {

    @Override
    public Class<RRC_QuantityConfigNR> getItemType() {
        return RRC_QuantityConfigNR.class;
    }

}