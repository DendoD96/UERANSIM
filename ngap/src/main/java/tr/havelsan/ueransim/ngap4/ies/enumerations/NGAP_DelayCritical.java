package tr.havelsan.ueransim.ngap4.ies.enumerations;

import tr.havelsan.ueransim.ngap4.core.*;
import tr.havelsan.ueransim.utils.bits.*;
import tr.havelsan.ueransim.utils.octets.*;
import tr.havelsan.ueransim.ngap4.ies.bit_strings.*;
import tr.havelsan.ueransim.ngap4.ies.octet_strings.*;
import tr.havelsan.ueransim.ngap4.ies.printable_strings.*;
import tr.havelsan.ueransim.ngap4.ies.sequences.*;
import tr.havelsan.ueransim.ngap4.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap4.ies.choices.*;
import tr.havelsan.ueransim.ngap4.ies.integers.*;
import tr.havelsan.ueransim.ngap4.ies.enumerations.*;

import java.util.List;

public class NGAP_DelayCritical extends NGAP_Enumerated {

    public static final NGAP_DelayCritical DELAY_CRITICAL = new NGAP_DelayCritical("delay-critical");
    public static final NGAP_DelayCritical NON_DELAY_CRITICAL = new NGAP_DelayCritical("non-delay-critical");

    protected NGAP_DelayCritical(String sValue) {
        super(sValue);
    }

    @Override
    public String getAsnName() {
        return "DelayCritical";
    }

    @Override
    public String getXmlTagName() {
        return "DelayCritical";
    }
}
