/*
 * Copyright (c) 2023, The UAPKI Project Authors.
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "CertRequest.h"

#include "asn_internal.h"

#undef FILE_MARKER
#define FILE_MARKER "pkix/struct/CertRequest.c"

static asn_TYPE_member_t asn_MBR_CertRequest_1[] = {
    { ATF_NOFLAGS, 0, offsetof(struct CertRequest, certReqId),
        (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
        0,
        &NativeInteger_desc,
        0,	/* No check because of -fno-constraints */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "certReqId"
        },
    { ATF_NOFLAGS, 0, offsetof(struct CertRequest, certTemplate),
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
        0,
        &CertTemplate_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "certTemplate"
        },
    { ATF_POINTER, 1, offsetof(struct CertRequest, controls),
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
        0,
        &SequenceOfANY_desc,
        0,	/* Defer constraints checking to the member type */
        0,	/* PER is not compiled, use -gen-PER */
        0,
        "controls"
        },
};
static const ber_tlv_tag_t CertRequest_desc_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CertRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 0 }, /* certReqId */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 1 }, /* certTemplate */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -1, 0 } /* controls */
};
static asn_SEQUENCE_specifics_t asn_SPC_CertRequest_specs_1 = {
    sizeof(struct CertRequest),
    offsetof(struct CertRequest, _asn_ctx),
    asn_MAP_CertRequest_tag2el_1,
    3,	/* Count of tags in the map */
    0, 0, 0,	/* Optional elements (not needed) */
    -1,	/* Start extensions */
    -1	/* Stop extensions */
};
asn_TYPE_descriptor_t CertRequest_desc = {
    "CertRequest",
    "CertRequest",
    SEQUENCE_free,
    SEQUENCE_print,
    SEQUENCE_constraint,
    SEQUENCE_decode_ber,
    SEQUENCE_encode_der,
    SEQUENCE_decode_xer,
    SEQUENCE_encode_xer,
    0, 0,	/* No PER support, use "-gen-PER" to enable */
    0,	/* Use generic outmost tag fetcher */
    CertRequest_desc_tags_1,
    sizeof(CertRequest_desc_tags_1)
        /sizeof(CertRequest_desc_tags_1[0]), /* 1 */
    CertRequest_desc_tags_1,	/* Same as above */
    sizeof(CertRequest_desc_tags_1)
        /sizeof(CertRequest_desc_tags_1[0]), /* 1 */
    0,	/* No PER visible constraints */
    asn_MBR_CertRequest_1,
    3,	/* Elements count */
    &asn_SPC_CertRequest_specs_1	/* Additional specs */
};

asn_TYPE_descriptor_t* get_CertRequest_desc(void)
{
    return &CertRequest_desc;
}
