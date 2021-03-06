/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_DL_CCCH_MessageType_H_
#define	_RRC_DL_CCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_DL_CCCH_MessageType_PR {
	RRC_DL_CCCH_MessageType_PR_NOTHING,	/* No components present */
	RRC_DL_CCCH_MessageType_PR_c1,
	RRC_DL_CCCH_MessageType_PR_messageClassExtension
} RRC_DL_CCCH_MessageType_PR;
typedef enum RRC_DL_CCCH_MessageType__c1_PR {
	RRC_DL_CCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	RRC_DL_CCCH_MessageType__c1_PR_rrcReject,
	RRC_DL_CCCH_MessageType__c1_PR_rrcSetup,
	RRC_DL_CCCH_MessageType__c1_PR_spare2,
	RRC_DL_CCCH_MessageType__c1_PR_spare1
} RRC_DL_CCCH_MessageType__c1_PR;

/* Forward declarations */
struct RRC_RRCReject;
struct RRC_RRCSetup;

/* RRC_DL-CCCH-MessageType */
typedef struct RRC_DL_CCCH_MessageType {
	RRC_DL_CCCH_MessageType_PR present;
	union RRC_DL_CCCH_MessageType_u {
		struct RRC_DL_CCCH_MessageType__c1 {
			RRC_DL_CCCH_MessageType__c1_PR present;
			union RRC_DL_CCCH_MessageType__RRC_c1_u {
				struct RRC_RRCReject	*rrcReject;
				struct RRC_RRCSetup	*rrcSetup;
				NULL_t	 spare2;
				NULL_t	 spare1;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *c1;
		struct RRC_DL_CCCH_MessageType__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_DL_CCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_DL_CCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_RRC_DL_CCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_DL_CCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_RRC_DL_CCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_DL_CCCH_MessageType_H_ */
#include <asn_internal.h>
