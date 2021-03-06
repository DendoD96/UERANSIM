/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_MasterKeyUpdate_H_
#define	_RRC_MasterKeyUpdate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "RRC_NextHopChainingCount.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_MasterKeyUpdate */
typedef struct RRC_MasterKeyUpdate {
	BOOLEAN_t	 keySetChangeIndicator;
	RRC_NextHopChainingCount_t	 nextHopChainingCount;
	OCTET_STRING_t	*nas_Container;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_MasterKeyUpdate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_MasterKeyUpdate;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_MasterKeyUpdate_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_MasterKeyUpdate_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_MasterKeyUpdate_H_ */
#include <asn_internal.h>
