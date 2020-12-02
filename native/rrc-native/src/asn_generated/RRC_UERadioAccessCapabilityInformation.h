/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_UERadioAccessCapabilityInformation_H_
#define	_RRC_UERadioAccessCapabilityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_UERadioAccessCapabilityInformation__criticalExtensions_PR {
	RRC_UERadioAccessCapabilityInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	RRC_UERadioAccessCapabilityInformation__criticalExtensions_PR_c1,
	RRC_UERadioAccessCapabilityInformation__criticalExtensions_PR_criticalExtensionsFuture
} RRC_UERadioAccessCapabilityInformation__criticalExtensions_PR;
typedef enum RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1_PR {
	RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1_PR_ueRadioAccessCapabilityInformation,
	RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1_PR_spare7,
	RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1_PR_spare6,
	RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1_PR_spare5,
	RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1_PR_spare4,
	RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1_PR_spare3,
	RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1_PR_spare2,
	RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1_PR_spare1
} RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1_PR;

/* Forward declarations */
struct RRC_UERadioAccessCapabilityInformation_IEs;

/* RRC_UERadioAccessCapabilityInformation */
typedef struct RRC_UERadioAccessCapabilityInformation {
	struct RRC_UERadioAccessCapabilityInformation__criticalExtensions {
		RRC_UERadioAccessCapabilityInformation__criticalExtensions_PR present;
		union RRC_UERadioAccessCapabilityInformation__RRC_criticalExtensions_u {
			struct RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1 {
				RRC_UERadioAccessCapabilityInformation__criticalExtensions__c1_PR present;
				union RRC_UERadioAccessCapabilityInformation__RRC_criticalExtensions__RRC_c1_u {
					struct RRC_UERadioAccessCapabilityInformation_IEs	*ueRadioAccessCapabilityInformation;
					NULL_t	 spare7;
					NULL_t	 spare6;
					NULL_t	 spare5;
					NULL_t	 spare4;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct RRC_UERadioAccessCapabilityInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_UERadioAccessCapabilityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_UERadioAccessCapabilityInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_UERadioAccessCapabilityInformation_H_ */
#include <asn_internal.h>