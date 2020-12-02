/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_MeasAndMobParametersMRDC_XDD_Diff_H_
#define	_RRC_MeasAndMobParametersMRDC_XDD_Diff_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_MeasAndMobParametersMRDC_XDD_Diff__sftd_MeasPSCell {
	RRC_MeasAndMobParametersMRDC_XDD_Diff__sftd_MeasPSCell_supported	= 0
} e_RRC_MeasAndMobParametersMRDC_XDD_Diff__sftd_MeasPSCell;
typedef enum RRC_MeasAndMobParametersMRDC_XDD_Diff__sftd_MeasNR_Cell {
	RRC_MeasAndMobParametersMRDC_XDD_Diff__sftd_MeasNR_Cell_supported	= 0
} e_RRC_MeasAndMobParametersMRDC_XDD_Diff__sftd_MeasNR_Cell;

/* RRC_MeasAndMobParametersMRDC-XDD-Diff */
typedef struct RRC_MeasAndMobParametersMRDC_XDD_Diff {
	long	*sftd_MeasPSCell;	/* OPTIONAL */
	long	*sftd_MeasNR_Cell;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_MeasAndMobParametersMRDC_XDD_Diff_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_sftd_MeasPSCell_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_sftd_MeasNR_Cell_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_MeasAndMobParametersMRDC_XDD_Diff;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_MeasAndMobParametersMRDC_XDD_Diff_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_MeasAndMobParametersMRDC_XDD_Diff_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_MeasAndMobParametersMRDC_XDD_Diff_H_ */
#include <asn_internal.h>