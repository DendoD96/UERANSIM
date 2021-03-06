/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_DummyF_H_
#define	_RRC_DummyF_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_DummyF */
typedef struct RRC_DummyF {
	long	 maxNumberPeriodicCSI_ReportPerBWP;
	long	 maxNumberAperiodicCSI_ReportPerBWP;
	long	 maxNumberSemiPersistentCSI_ReportPerBWP;
	long	 simultaneousCSI_ReportsAllCC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_DummyF_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_DummyF;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_DummyF_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_DummyF_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_DummyF_H_ */
#include <asn_internal.h>
