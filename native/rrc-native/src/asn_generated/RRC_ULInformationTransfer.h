/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_ULInformationTransfer_H_
#define	_RRC_ULInformationTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_ULInformationTransfer__criticalExtensions_PR {
	RRC_ULInformationTransfer__criticalExtensions_PR_NOTHING,	/* No components present */
	RRC_ULInformationTransfer__criticalExtensions_PR_ulInformationTransfer,
	RRC_ULInformationTransfer__criticalExtensions_PR_criticalExtensionsFuture
} RRC_ULInformationTransfer__criticalExtensions_PR;

/* Forward declarations */
struct RRC_ULInformationTransfer_IEs;

/* RRC_ULInformationTransfer */
typedef struct RRC_ULInformationTransfer {
	struct RRC_ULInformationTransfer__criticalExtensions {
		RRC_ULInformationTransfer__criticalExtensions_PR present;
		union RRC_ULInformationTransfer__RRC_criticalExtensions_u {
			struct RRC_ULInformationTransfer_IEs	*ulInformationTransfer;
			struct RRC_ULInformationTransfer__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_ULInformationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_ULInformationTransfer;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_ULInformationTransfer_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_ULInformationTransfer_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_ULInformationTransfer_H_ */
#include <asn_internal.h>
