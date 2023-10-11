/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RSPDefinitions"
 * 	found in "../../../asn1/rsp.asn"
 * 	`asn1c -fwide-types -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_SeqBoundProfilePackageTLV88_H_
#define	_SeqBoundProfilePackageTLV88_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BoundProfilePackageTLV88.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SeqBoundProfilePackageTLV88 */
typedef struct SeqBoundProfilePackageTLV88 {
	A_SEQUENCE_OF(BoundProfilePackageTLV88_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqBoundProfilePackageTLV88_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqBoundProfilePackageTLV88;
extern asn_SET_OF_specifics_t asn_SPC_SeqBoundProfilePackageTLV88_specs_1;
extern asn_TYPE_member_t asn_MBR_SeqBoundProfilePackageTLV88_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _SeqBoundProfilePackageTLV88_H_ */
#include "asn_internal.h"