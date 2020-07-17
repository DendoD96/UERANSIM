package tr.havelsan.ueransim.ngap4.ies.choices;

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

public class NGAP_WarningAreaList extends NGAP_Choice {

    public NGAP_EUTRA_CGIListForWarning eUTRA_CGIListForWarning;
    public NGAP_NR_CGIListForWarning nR_CGIListForWarning;
    public NGAP_TAIListForWarning tAIListForWarning;
    public NGAP_EmergencyAreaIDList emergencyAreaIDList;

    @Override
    public String getAsnName() {
        return "WarningAreaList";
    }

    @Override
    public String getXmlTagName() {
        return "WarningAreaList";
    }

    @Override
    public String[] getMemberNames() {
        return new String[]{"eUTRA-CGIListForWarning", "nR-CGIListForWarning", "tAIListForWarning", "emergencyAreaIDList"};
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{"eUTRA_CGIListForWarning", "nR_CGIListForWarning", "tAIListForWarning", "emergencyAreaIDList"};
    }
}
