/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnOctetString;
import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.sequence_ofs.RRC_UE_CapabilityRAT_ContainerList;

public class RRC_UECapabilityInformation_IEs extends AsnSequence {
    public RRC_UE_CapabilityRAT_ContainerList ue_CapabilityRAT_ContainerList; // optional
    public AsnOctetString lateNonCriticalExtension; // optional
    public RRC_nonCriticalExtension_5 nonCriticalExtension; // optional

    public static class RRC_nonCriticalExtension_5 extends AsnSequence {
    }
}

