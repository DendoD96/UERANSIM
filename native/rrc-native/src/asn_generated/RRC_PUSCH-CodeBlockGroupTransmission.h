/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_PUSCH_CodeBlockGroupTransmission_H_
#define	_RRC_PUSCH_CodeBlockGroupTransmission_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_PUSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock {
	RRC_PUSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock_n2	= 0,
	RRC_PUSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock_n4	= 1,
	RRC_PUSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock_n6	= 2,
	RRC_PUSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock_n8	= 3
} e_RRC_PUSCH_CodeBlockGroupTransmission__maxCodeBlockGroupsPerTransportBlock;

/* RRC_PUSCH-CodeBlockGroupTransmission */
typedef struct RRC_PUSCH_CodeBlockGroupTransmission {
	long	 maxCodeBlockGroupsPerTransportBlock;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_PUSCH_CodeBlockGroupTransmission_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_maxCodeBlockGroupsPerTransportBlock_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_PUSCH_CodeBlockGroupTransmission;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_PUSCH_CodeBlockGroupTransmission_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_PUSCH_CodeBlockGroupTransmission_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_PUSCH_CodeBlockGroupTransmission_H_ */
#include <asn_internal.h>