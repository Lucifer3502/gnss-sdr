/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef _AdditionalDopplerFields_H_
#define _AdditionalDopplerFields_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* AdditionalDopplerFields */
    typedef struct AdditionalDopplerFields
    {
        long doppler1;
        long dopplerUncertainty;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } AdditionalDopplerFields_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_AdditionalDopplerFields;

#ifdef __cplusplus
}
#endif

#endif /* _AdditionalDopplerFields_H_ */
#include <asn_internal.h>
