#ifndef AWS_CRT_PYTHON_CRYPTO_H
#define AWS_CRT_PYTHON_CRYPTO_H
/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include "module.h"

/** Name string for hash capsule. */
extern const char *s_capsule_name_hash;
/** Name string for hmac capsule. */
extern const char *s_capsule_name_hmac;
/** Name string for rsa capsule. */
extern const char *s_capsule_name_rsa;
/** Name string for rsa capsule. */
extern const char *s_capsule_name_ed25519;

PyObject *aws_py_sha1_new(PyObject *self, PyObject *args);
PyObject *aws_py_sha256_new(PyObject *self, PyObject *args);
PyObject *aws_py_md5_new(PyObject *self, PyObject *args);

PyObject *aws_py_hash_update(PyObject *self, PyObject *args);
PyObject *aws_py_hash_digest(PyObject *self, PyObject *args);

PyObject *aws_py_sha256_hmac_new(PyObject *self, PyObject *args);

PyObject *aws_py_hmac_update(PyObject *self, PyObject *args);
PyObject *aws_py_hmac_digest(PyObject *self, PyObject *args);

PyObject *aws_py_sha256_compute(PyObject *self, PyObject *args);
PyObject *aws_py_md5_compute(PyObject *self, PyObject *args);
PyObject *aws_py_sha256_hmac_compute(PyObject *self, PyObject *args);

PyObject *aws_py_rsa_private_key_from_pem_data(PyObject *self, PyObject *args);
PyObject *aws_py_rsa_public_key_from_pem_data(PyObject *self, PyObject *args);

PyObject *aws_py_rsa_private_key_from_der_data(PyObject *self, PyObject *args);
PyObject *aws_py_rsa_public_key_from_der_data(PyObject *self, PyObject *args);

PyObject *aws_py_rsa_encrypt(PyObject *self, PyObject *args);
PyObject *aws_py_rsa_decrypt(PyObject *self, PyObject *args);
PyObject *aws_py_rsa_sign(PyObject *self, PyObject *args);
PyObject *aws_py_rsa_verify(PyObject *self, PyObject *args);

PyObject *aws_py_ed25519_new_generate(PyObject *self, PyObject *args);
PyObject *aws_py_ed25519_export_public_key(PyObject *self, PyObject *args);
PyObject *aws_py_ed25519_export_private_key(PyObject *self, PyObject *args);

#endif /* AWS_CRT_PYTHON_CRYPTO_H */
