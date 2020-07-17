package tr.havelsan.ueransim.ngap4.ies.sequences;

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

public class NGAP_LocationReportingRequestType extends NGAP_Sequence {

    public NGAP_EventType eventType;
    public NGAP_ReportArea reportArea;
    public NGAP_AreaOfInterestList areaOfInterestList;
    public NGAP_LocationReportingReferenceID locationReportingReferenceIDToBeCancelled;

    @Override
    public String getAsnName() {
        return "LocationReportingRequestType";
    }

    @Override
    public String getXmlTagName() {
        return "LocationReportingRequestType";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"eventType", "reportArea", "areaOfInterestList", "locationReportingReferenceIDToBeCancelled"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"eventType", "reportArea", "areaOfInterestList", "locationReportingReferenceIDToBeCancelled"};
    }
}
