/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.ngap0.ies.bit_strings;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.pdu.*;
import tr.havelsan.ueransim.utils.bits.*;
import tr.havelsan.ueransim.utils.octets.*;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;
import tr.havelsan.ueransim.ngap0.ies.printable_strings.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.choices.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;
import tr.havelsan.ueransim.ngap0.ies.enumerations.*;

import java.util.List;

public class NGAP_AMFPointer extends NGAP_BitString {

    public NGAP_AMFPointer(BitString value) {
        super(value);
    }

    public NGAP_AMFPointer(OctetString octetString, int bitLength) {
        super(octetString, bitLength);
    }

    public NGAP_AMFPointer(OctetString octetString) {
        super(octetString);
    }

    public NGAP_AMFPointer(Octet[] octets, int bitLength) {
        super(octets, bitLength);
    }

    public NGAP_AMFPointer(Octet[] octets) {
        super(octets);
    }

    public NGAP_AMFPointer(byte[] octets, int bitLength) {
        super(octets, bitLength);
    }

    public NGAP_AMFPointer(byte[] octets) {
        super(octets);
    }

    public NGAP_AMFPointer(String hex, int bitLength) {
        super(hex, bitLength);
    }

    public NGAP_AMFPointer(String bits) {
        super(bits);
    }

    @Override
    public String getAsnName() {
        return "AMFPointer";
    }

    @Override
    public String getXmlTagName() {
        return "AMFPointer";
    }
}
