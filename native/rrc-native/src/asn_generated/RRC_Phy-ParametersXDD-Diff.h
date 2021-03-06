/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_Phy_ParametersXDD_Diff_H_
#define	_RRC_Phy_ParametersXDD_Diff_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_Phy_ParametersXDD_Diff__dynamicSFI {
	RRC_Phy_ParametersXDD_Diff__dynamicSFI_supported	= 0
} e_RRC_Phy_ParametersXDD_Diff__dynamicSFI;
typedef enum RRC_Phy_ParametersXDD_Diff__twoPUCCH_F0_2_ConsecSymbols {
	RRC_Phy_ParametersXDD_Diff__twoPUCCH_F0_2_ConsecSymbols_supported	= 0
} e_RRC_Phy_ParametersXDD_Diff__twoPUCCH_F0_2_ConsecSymbols;
typedef enum RRC_Phy_ParametersXDD_Diff__twoDifferentTPC_Loop_PUSCH {
	RRC_Phy_ParametersXDD_Diff__twoDifferentTPC_Loop_PUSCH_supported	= 0
} e_RRC_Phy_ParametersXDD_Diff__twoDifferentTPC_Loop_PUSCH;
typedef enum RRC_Phy_ParametersXDD_Diff__twoDifferentTPC_Loop_PUCCH {
	RRC_Phy_ParametersXDD_Diff__twoDifferentTPC_Loop_PUCCH_supported	= 0
} e_RRC_Phy_ParametersXDD_Diff__twoDifferentTPC_Loop_PUCCH;
typedef enum RRC_Phy_ParametersXDD_Diff__ext1__dl_SchedulingOffset_PDSCH_TypeA {
	RRC_Phy_ParametersXDD_Diff__ext1__dl_SchedulingOffset_PDSCH_TypeA_supported	= 0
} e_RRC_Phy_ParametersXDD_Diff__ext1__dl_SchedulingOffset_PDSCH_TypeA;
typedef enum RRC_Phy_ParametersXDD_Diff__ext1__dl_SchedulingOffset_PDSCH_TypeB {
	RRC_Phy_ParametersXDD_Diff__ext1__dl_SchedulingOffset_PDSCH_TypeB_supported	= 0
} e_RRC_Phy_ParametersXDD_Diff__ext1__dl_SchedulingOffset_PDSCH_TypeB;
typedef enum RRC_Phy_ParametersXDD_Diff__ext1__ul_SchedulingOffset {
	RRC_Phy_ParametersXDD_Diff__ext1__ul_SchedulingOffset_supported	= 0
} e_RRC_Phy_ParametersXDD_Diff__ext1__ul_SchedulingOffset;

/* RRC_Phy-ParametersXDD-Diff */
typedef struct RRC_Phy_ParametersXDD_Diff {
	long	*dynamicSFI;	/* OPTIONAL */
	long	*twoPUCCH_F0_2_ConsecSymbols;	/* OPTIONAL */
	long	*twoDifferentTPC_Loop_PUSCH;	/* OPTIONAL */
	long	*twoDifferentTPC_Loop_PUCCH;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRC_Phy_ParametersXDD_Diff__ext1 {
		long	*dl_SchedulingOffset_PDSCH_TypeA;	/* OPTIONAL */
		long	*dl_SchedulingOffset_PDSCH_TypeB;	/* OPTIONAL */
		long	*ul_SchedulingOffset;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_Phy_ParametersXDD_Diff_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_dynamicSFI_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_twoPUCCH_F0_2_ConsecSymbols_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_twoDifferentTPC_Loop_PUSCH_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_twoDifferentTPC_Loop_PUCCH_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_dl_SchedulingOffset_PDSCH_TypeA_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_dl_SchedulingOffset_PDSCH_TypeB_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_ul_SchedulingOffset_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_Phy_ParametersXDD_Diff;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_Phy_ParametersXDD_Diff_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_Phy_ParametersXDD_Diff_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_Phy_ParametersXDD_Diff_H_ */
#include <asn_internal.h>
