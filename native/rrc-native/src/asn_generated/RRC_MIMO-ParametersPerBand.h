/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_MIMO_ParametersPerBand_H_
#define	_RRC_MIMO_ParametersPerBand_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC {
	RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n4	= 0,
	RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n8	= 1,
	RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n16	= 2,
	RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n32	= 3,
	RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n64	= 4,
	RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC_n128	= 5
} e_RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberConfiguredTCIstatesPerCC;
typedef enum RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP {
	RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP_n1	= 0,
	RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP_n2	= 1,
	RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP_n4	= 2,
	RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP_n8	= 3
} e_RRC_MIMO_ParametersPerBand__tci_StatePDSCH__maxNumberActiveTCI_PerBWP;
typedef enum RRC_MIMO_ParametersPerBand__additionalActiveTCI_StatePDCCH {
	RRC_MIMO_ParametersPerBand__additionalActiveTCI_StatePDCCH_supported	= 0
} e_RRC_MIMO_ParametersPerBand__additionalActiveTCI_StatePDCCH;
typedef enum RRC_MIMO_ParametersPerBand__pusch_TransCoherence {
	RRC_MIMO_ParametersPerBand__pusch_TransCoherence_nonCoherent	= 0,
	RRC_MIMO_ParametersPerBand__pusch_TransCoherence_partialCoherent	= 1,
	RRC_MIMO_ParametersPerBand__pusch_TransCoherence_fullCoherent	= 2
} e_RRC_MIMO_ParametersPerBand__pusch_TransCoherence;
typedef enum RRC_MIMO_ParametersPerBand__beamCorrespondenceWithoutUL_BeamSweeping {
	RRC_MIMO_ParametersPerBand__beamCorrespondenceWithoutUL_BeamSweeping_supported	= 0
} e_RRC_MIMO_ParametersPerBand__beamCorrespondenceWithoutUL_BeamSweeping;
typedef enum RRC_MIMO_ParametersPerBand__periodicBeamReport {
	RRC_MIMO_ParametersPerBand__periodicBeamReport_supported	= 0
} e_RRC_MIMO_ParametersPerBand__periodicBeamReport;
typedef enum RRC_MIMO_ParametersPerBand__aperiodicBeamReport {
	RRC_MIMO_ParametersPerBand__aperiodicBeamReport_supported	= 0
} e_RRC_MIMO_ParametersPerBand__aperiodicBeamReport;
typedef enum RRC_MIMO_ParametersPerBand__sp_BeamReportPUCCH {
	RRC_MIMO_ParametersPerBand__sp_BeamReportPUCCH_supported	= 0
} e_RRC_MIMO_ParametersPerBand__sp_BeamReportPUCCH;
typedef enum RRC_MIMO_ParametersPerBand__sp_BeamReportPUSCH {
	RRC_MIMO_ParametersPerBand__sp_BeamReportPUSCH_supported	= 0
} e_RRC_MIMO_ParametersPerBand__sp_BeamReportPUSCH;
typedef enum RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz {
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz_n4	= 0,
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz_n7	= 1,
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz_n14	= 2
} e_RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_15kHz;
typedef enum RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz {
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz_n4	= 0,
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz_n7	= 1,
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz_n14	= 2
} e_RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_30kHz;
typedef enum RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz {
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz_n4	= 0,
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz_n7	= 1,
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz_n14	= 2
} e_RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_60kHz;
typedef enum RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz {
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz_n4	= 0,
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz_n7	= 1,
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz_n14	= 2
} e_RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_120kHz;
typedef enum RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz {
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz_n4	= 0,
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz_n7	= 1,
	RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz_n14	= 2
} e_RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL__scs_240kHz;
typedef enum RRC_MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting {
	RRC_MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting_n1	= 0,
	RRC_MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting_n2	= 1,
	RRC_MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting_n4	= 2
} e_RRC_MIMO_ParametersPerBand__maxNumberNonGroupBeamReporting;
typedef enum RRC_MIMO_ParametersPerBand__groupBeamReporting {
	RRC_MIMO_ParametersPerBand__groupBeamReporting_supported	= 0
} e_RRC_MIMO_ParametersPerBand__groupBeamReporting;
typedef enum RRC_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM {
	RRC_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM_n2	= 0,
	RRC_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM_n4	= 1,
	RRC_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM_n8	= 2,
	RRC_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM_n16	= 3
} e_RRC_MIMO_ParametersPerBand__uplinkBeamManagement__maxNumberSRS_ResourcePerSet_BM;
typedef enum RRC_MIMO_ParametersPerBand__dummy2 {
	RRC_MIMO_ParametersPerBand__dummy2_supported	= 0
} e_RRC_MIMO_ParametersPerBand__dummy2;
typedef enum RRC_MIMO_ParametersPerBand__twoPortsPTRS_UL {
	RRC_MIMO_ParametersPerBand__twoPortsPTRS_UL_supported	= 0
} e_RRC_MIMO_ParametersPerBand__twoPortsPTRS_UL;
typedef enum RRC_MIMO_ParametersPerBand__beamReportTiming__scs_15kHz {
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_15kHz_sym2	= 0,
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_15kHz_sym4	= 1,
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_15kHz_sym8	= 2
} e_RRC_MIMO_ParametersPerBand__beamReportTiming__scs_15kHz;
typedef enum RRC_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz {
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz_sym4	= 0,
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz_sym8	= 1,
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz_sym14	= 2,
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz_sym28	= 3
} e_RRC_MIMO_ParametersPerBand__beamReportTiming__scs_30kHz;
typedef enum RRC_MIMO_ParametersPerBand__beamReportTiming__scs_60kHz {
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_60kHz_sym8	= 0,
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_60kHz_sym14	= 1,
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_60kHz_sym28	= 2
} e_RRC_MIMO_ParametersPerBand__beamReportTiming__scs_60kHz;
typedef enum RRC_MIMO_ParametersPerBand__beamReportTiming__scs_120kHz {
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_120kHz_sym14	= 0,
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_120kHz_sym28	= 1,
	RRC_MIMO_ParametersPerBand__beamReportTiming__scs_120kHz_sym56	= 2
} e_RRC_MIMO_ParametersPerBand__beamReportTiming__scs_120kHz;
typedef enum RRC_MIMO_ParametersPerBand__aperiodicTRS {
	RRC_MIMO_ParametersPerBand__aperiodicTRS_supported	= 0
} e_RRC_MIMO_ParametersPerBand__aperiodicTRS;
typedef enum RRC_MIMO_ParametersPerBand__ext1__dummy6 {
	RRC_MIMO_ParametersPerBand__ext1__dummy6_true	= 0
} e_RRC_MIMO_ParametersPerBand__ext1__dummy6;
typedef enum RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz {
	RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz_sym14	= 0,
	RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz_sym28	= 1,
	RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz_sym48	= 2,
	RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz_sym224	= 3,
	RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz_sym336	= 4
} e_RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_60kHz;
typedef enum RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz {
	RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz_sym14	= 0,
	RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz_sym28	= 1,
	RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz_sym48	= 2,
	RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz_sym224	= 3,
	RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz_sym336	= 4
} e_RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming__scs_120kHz;

/* Forward declarations */
struct RRC_DummyG;
struct RRC_SRS_Resources;
struct RRC_DummyH;
struct RRC_PTRS_DensityRecommendationDL;
struct RRC_PTRS_DensityRecommendationUL;
struct RRC_BeamManagementSSB_CSI_RS;
struct RRC_CodebookParameters;
struct RRC_CSI_RS_IM_ReceptionForFeedback;
struct RRC_CSI_RS_ProcFrameworkForSRS;
struct RRC_CSI_ReportFramework;
struct RRC_CSI_RS_ForTracking;
struct RRC_SpatialRelations;
struct RRC_SupportedCSI_RS_Resource;

/* RRC_MIMO-ParametersPerBand */
typedef struct RRC_MIMO_ParametersPerBand {
	struct RRC_MIMO_ParametersPerBand__tci_StatePDSCH {
		long	*maxNumberConfiguredTCIstatesPerCC;	/* OPTIONAL */
		long	*maxNumberActiveTCI_PerBWP;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tci_StatePDSCH;
	long	*additionalActiveTCI_StatePDCCH;	/* OPTIONAL */
	long	*pusch_TransCoherence;	/* OPTIONAL */
	long	*beamCorrespondenceWithoutUL_BeamSweeping;	/* OPTIONAL */
	long	*periodicBeamReport;	/* OPTIONAL */
	long	*aperiodicBeamReport;	/* OPTIONAL */
	long	*sp_BeamReportPUCCH;	/* OPTIONAL */
	long	*sp_BeamReportPUSCH;	/* OPTIONAL */
	struct RRC_DummyG	*dummy1;	/* OPTIONAL */
	long	*maxNumberRxBeam;	/* OPTIONAL */
	struct RRC_MIMO_ParametersPerBand__maxNumberRxTxBeamSwitchDL {
		long	*scs_15kHz;	/* OPTIONAL */
		long	*scs_30kHz;	/* OPTIONAL */
		long	*scs_60kHz;	/* OPTIONAL */
		long	*scs_120kHz;	/* OPTIONAL */
		long	*scs_240kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *maxNumberRxTxBeamSwitchDL;
	long	*maxNumberNonGroupBeamReporting;	/* OPTIONAL */
	long	*groupBeamReporting;	/* OPTIONAL */
	struct RRC_MIMO_ParametersPerBand__uplinkBeamManagement {
		long	 maxNumberSRS_ResourcePerSet_BM;
		long	 maxNumberSRS_ResourceSet;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uplinkBeamManagement;
	long	*maxNumberCSI_RS_BFD;	/* OPTIONAL */
	long	*maxNumberSSB_BFD;	/* OPTIONAL */
	long	*maxNumberCSI_RS_SSB_CBD;	/* OPTIONAL */
	long	*dummy2;	/* OPTIONAL */
	long	*twoPortsPTRS_UL;	/* OPTIONAL */
	struct RRC_SRS_Resources	*dummy5;	/* OPTIONAL */
	long	*dummy3;	/* OPTIONAL */
	struct RRC_MIMO_ParametersPerBand__beamReportTiming {
		long	*scs_15kHz;	/* OPTIONAL */
		long	*scs_30kHz;	/* OPTIONAL */
		long	*scs_60kHz;	/* OPTIONAL */
		long	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *beamReportTiming;
	struct RRC_MIMO_ParametersPerBand__ptrs_DensityRecommendationSetDL {
		struct RRC_PTRS_DensityRecommendationDL	*scs_15kHz;	/* OPTIONAL */
		struct RRC_PTRS_DensityRecommendationDL	*scs_30kHz;	/* OPTIONAL */
		struct RRC_PTRS_DensityRecommendationDL	*scs_60kHz;	/* OPTIONAL */
		struct RRC_PTRS_DensityRecommendationDL	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ptrs_DensityRecommendationSetDL;
	struct RRC_MIMO_ParametersPerBand__ptrs_DensityRecommendationSetUL {
		struct RRC_PTRS_DensityRecommendationUL	*scs_15kHz;	/* OPTIONAL */
		struct RRC_PTRS_DensityRecommendationUL	*scs_30kHz;	/* OPTIONAL */
		struct RRC_PTRS_DensityRecommendationUL	*scs_60kHz;	/* OPTIONAL */
		struct RRC_PTRS_DensityRecommendationUL	*scs_120kHz;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ptrs_DensityRecommendationSetUL;
	struct RRC_DummyH	*dummy4;	/* OPTIONAL */
	long	*aperiodicTRS;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRC_MIMO_ParametersPerBand__ext1 {
		long	*dummy6;	/* OPTIONAL */
		struct RRC_BeamManagementSSB_CSI_RS	*beamManagementSSB_CSI_RS;	/* OPTIONAL */
		struct RRC_MIMO_ParametersPerBand__ext1__beamSwitchTiming {
			long	*scs_60kHz;	/* OPTIONAL */
			long	*scs_120kHz;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *beamSwitchTiming;
		struct RRC_CodebookParameters	*codebookParameters;	/* OPTIONAL */
		struct RRC_CSI_RS_IM_ReceptionForFeedback	*csi_RS_IM_ReceptionForFeedback;	/* OPTIONAL */
		struct RRC_CSI_RS_ProcFrameworkForSRS	*csi_RS_ProcFrameworkForSRS;	/* OPTIONAL */
		struct RRC_CSI_ReportFramework	*csi_ReportFramework;	/* OPTIONAL */
		struct RRC_CSI_RS_ForTracking	*csi_RS_ForTracking;	/* OPTIONAL */
		struct RRC_MIMO_ParametersPerBand__ext1__srs_AssocCSI_RS {
			A_SEQUENCE_OF(struct RRC_SupportedCSI_RS_Resource) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *srs_AssocCSI_RS;
		struct RRC_SpatialRelations	*spatialRelations;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_MIMO_ParametersPerBand_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_maxNumberConfiguredTCIstatesPerCC_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_maxNumberActiveTCI_PerBWP_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_additionalActiveTCI_StatePDCCH_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_pusch_TransCoherence_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_beamCorrespondenceWithoutUL_BeamSweeping_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_periodicBeamReport_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_aperiodicBeamReport_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_sp_BeamReportPUCCH_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_sp_BeamReportPUSCH_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_scs_15kHz_34;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_scs_30kHz_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_scs_60kHz_42;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_scs_120kHz_46;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_scs_240kHz_50;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_maxNumberNonGroupBeamReporting_54;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_groupBeamReporting_58;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_maxNumberSRS_ResourcePerSet_BM_61;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_dummy2_70;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_twoPortsPTRS_UL_72;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_scs_15kHz_77;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_scs_30kHz_81;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_scs_60kHz_86;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_scs_120kHz_90;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_aperiodicTRS_105;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_dummy6_109;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_scs_60kHz_113;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_scs_120kHz_119;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_MIMO_ParametersPerBand;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_MIMO_ParametersPerBand_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_MIMO_ParametersPerBand_1[27];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_MIMO_ParametersPerBand_H_ */
#include <asn_internal.h>
