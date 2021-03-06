/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_CellReselectionPriorities_H_
#define	_RRC_CellReselectionPriorities_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_CellReselectionPriorities__t320 {
	RRC_CellReselectionPriorities__t320_min5	= 0,
	RRC_CellReselectionPriorities__t320_min10	= 1,
	RRC_CellReselectionPriorities__t320_min20	= 2,
	RRC_CellReselectionPriorities__t320_min30	= 3,
	RRC_CellReselectionPriorities__t320_min60	= 4,
	RRC_CellReselectionPriorities__t320_min120	= 5,
	RRC_CellReselectionPriorities__t320_min180	= 6,
	RRC_CellReselectionPriorities__t320_spare1	= 7
} e_RRC_CellReselectionPriorities__t320;

/* Forward declarations */
struct RRC_FreqPriorityListEUTRA;
struct RRC_FreqPriorityListNR;

/* RRC_CellReselectionPriorities */
typedef struct RRC_CellReselectionPriorities {
	struct RRC_FreqPriorityListEUTRA	*freqPriorityListEUTRA;	/* OPTIONAL */
	struct RRC_FreqPriorityListNR	*freqPriorityListNR;	/* OPTIONAL */
	long	*t320;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_CellReselectionPriorities_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_t320_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_CellReselectionPriorities;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_CellReselectionPriorities_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_CellReselectionPriorities_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_CellReselectionPriorities_H_ */
#include <asn_internal.h>
