/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_MeasAndMobParametersCommon_H_
#define	_RRC_MeasAndMobParametersCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_MeasAndMobParametersCommon__ssb_RLM {
	RRC_MeasAndMobParametersCommon__ssb_RLM_supported	= 0
} e_RRC_MeasAndMobParametersCommon__ssb_RLM;
typedef enum RRC_MeasAndMobParametersCommon__ssb_AndCSI_RS_RLM {
	RRC_MeasAndMobParametersCommon__ssb_AndCSI_RS_RLM_supported	= 0
} e_RRC_MeasAndMobParametersCommon__ssb_AndCSI_RS_RLM;
typedef enum RRC_MeasAndMobParametersCommon__ext1__eventB_MeasAndReport {
	RRC_MeasAndMobParametersCommon__ext1__eventB_MeasAndReport_supported	= 0
} e_RRC_MeasAndMobParametersCommon__ext1__eventB_MeasAndReport;
typedef enum RRC_MeasAndMobParametersCommon__ext1__handoverFDD_TDD {
	RRC_MeasAndMobParametersCommon__ext1__handoverFDD_TDD_supported	= 0
} e_RRC_MeasAndMobParametersCommon__ext1__handoverFDD_TDD;
typedef enum RRC_MeasAndMobParametersCommon__ext1__eutra_CGI_Reporting {
	RRC_MeasAndMobParametersCommon__ext1__eutra_CGI_Reporting_supported	= 0
} e_RRC_MeasAndMobParametersCommon__ext1__eutra_CGI_Reporting;
typedef enum RRC_MeasAndMobParametersCommon__ext1__nr_CGI_Reporting {
	RRC_MeasAndMobParametersCommon__ext1__nr_CGI_Reporting_supported	= 0
} e_RRC_MeasAndMobParametersCommon__ext1__nr_CGI_Reporting;
typedef enum RRC_MeasAndMobParametersCommon__ext2__independentGapConfig {
	RRC_MeasAndMobParametersCommon__ext2__independentGapConfig_supported	= 0
} e_RRC_MeasAndMobParametersCommon__ext2__independentGapConfig;
typedef enum RRC_MeasAndMobParametersCommon__ext2__periodicEUTRA_MeasAndReport {
	RRC_MeasAndMobParametersCommon__ext2__periodicEUTRA_MeasAndReport_supported	= 0
} e_RRC_MeasAndMobParametersCommon__ext2__periodicEUTRA_MeasAndReport;
typedef enum RRC_MeasAndMobParametersCommon__ext2__handoverFR1_FR2 {
	RRC_MeasAndMobParametersCommon__ext2__handoverFR1_FR2_supported	= 0
} e_RRC_MeasAndMobParametersCommon__ext2__handoverFR1_FR2;
typedef enum RRC_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR {
	RRC_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR_n4	= 0,
	RRC_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR_n8	= 1,
	RRC_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR_n16	= 2,
	RRC_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR_n32	= 3,
	RRC_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR_n64	= 4,
	RRC_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR_n96	= 5
} e_RRC_MeasAndMobParametersCommon__ext2__maxNumberCSI_RS_RRM_RS_SINR;
typedef enum RRC_MeasAndMobParametersCommon__ext3__nr_CGI_Reporting_ENDC {
	RRC_MeasAndMobParametersCommon__ext3__nr_CGI_Reporting_ENDC_supported	= 0
} e_RRC_MeasAndMobParametersCommon__ext3__nr_CGI_Reporting_ENDC;

/* RRC_MeasAndMobParametersCommon */
typedef struct RRC_MeasAndMobParametersCommon {
	BIT_STRING_t	*supportedGapPattern;	/* OPTIONAL */
	long	*ssb_RLM;	/* OPTIONAL */
	long	*ssb_AndCSI_RS_RLM;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRC_MeasAndMobParametersCommon__ext1 {
		long	*eventB_MeasAndReport;	/* OPTIONAL */
		long	*handoverFDD_TDD;	/* OPTIONAL */
		long	*eutra_CGI_Reporting;	/* OPTIONAL */
		long	*nr_CGI_Reporting;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct RRC_MeasAndMobParametersCommon__ext2 {
		long	*independentGapConfig;	/* OPTIONAL */
		long	*periodicEUTRA_MeasAndReport;	/* OPTIONAL */
		long	*handoverFR1_FR2;	/* OPTIONAL */
		long	*maxNumberCSI_RS_RRM_RS_SINR;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct RRC_MeasAndMobParametersCommon__ext3 {
		long	*nr_CGI_Reporting_ENDC;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_MeasAndMobParametersCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_ssb_RLM_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_ssb_AndCSI_RS_RLM_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_eventB_MeasAndReport_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_handoverFDD_TDD_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_eutra_CGI_Reporting_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_nr_CGI_Reporting_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_independentGapConfig_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_periodicEUTRA_MeasAndReport_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_handoverFR1_FR2_22;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_maxNumberCSI_RS_RRM_RS_SINR_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_nr_CGI_Reporting_ENDC_32;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_MeasAndMobParametersCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_MeasAndMobParametersCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_MeasAndMobParametersCommon_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_MeasAndMobParametersCommon_H_ */
#include <asn_internal.h>
