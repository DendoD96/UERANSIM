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

public class NGAP_Criticality extends NGAP_Enumerated {

    public static final NGAP_Criticality REJECT = new NGAP_Criticality("reject");
    public static final NGAP_Criticality IGNORE = new NGAP_Criticality("ignore");
    public static final NGAP_Criticality NOTIFY = new NGAP_Criticality("notify");

    protected NGAP_Criticality(String sValue) {
        super(sValue);
    }

    @Override
    public String getAsnName() {
        return "Criticality";
    }

    @Override
    public String getXmlTagName() {
        return "Criticality";
    }
}
