package com.runsim.backend.nas.impl.messages;

import com.runsim.backend.nas.core.IMessageBuilder;
import com.runsim.backend.nas.core.messages.PlainMmMessage;
import com.runsim.backend.nas.impl.ies.*;

public class SecurityModeCommand extends PlainMmMessage {
    public IENasSecurityAlgorithms selectedNasSecurityAlgorithms;
    public IENasKeySetIdentifier ngKsi;
    public IEUeSecurityCapability replayedUeSecurityCapabilities;
    public IEImeiSvRequest imeiSvRequest;
    public IEEpsNasSecurityAlgorithms epsNasSecurityAlgorithms;
    public IEAdditional5gSecurityInformation additional5gSecurityInformation;
    public IEEapMessage eapMessage;
    public IEAbba abba;
    public IES1UeNetworkCapability replayedS1UeNetworkCapability;

    @Override
    public void build(IMessageBuilder builder) {
        super.build(builder);

        builder.mandatoryIE("selectedNasSecurityAlgorithms");
        builder.mandatoryIE1("ngKsi");
        builder.mandatoryIE("replayedUeSecurityCapabilities");
        builder.optionalIE1(0xE, "imeiSvRequest");
        builder.optionalIE(0x57, "epsNasSecurityAlgorithms");
        builder.optionalIE(0x36, "additional5gSecurityInformation");
        builder.optionalIE(0x78, "eapMessage");
        builder.optionalIE(0x38, "abba");
        builder.optionalIE(0x19, "replayedS1UeNetworkCapability");
    }
}