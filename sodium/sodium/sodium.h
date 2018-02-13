//
//  sodium.h
//  sodium
//
//  Created by onesecure on 19/02/2017.
//  Copyright © 2017 onesecure. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for sodium.
FOUNDATION_EXPORT double sodiumVersionNumber;

//! Project version string for sodium.
FOUNDATION_EXPORT const unsigned char sodiumVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <sodium/PublicHeader.h>


#include <sodium/core.h>
#include <sodium/crypto_aead_aes256gcm.h>
#include <sodium/crypto_aead_chacha20poly1305.h>
#include <sodium/crypto_aead_xchacha20poly1305.h>
#include <sodium/crypto_auth.h>
#include <sodium/crypto_auth_hmacsha256.h>
#include <sodium/crypto_auth_hmacsha512.h>
#include <sodium/crypto_auth_hmacsha512256.h>
#include <sodium/crypto_box.h>
#include <sodium/crypto_box_curve25519xchacha20poly1305.h>
#include <sodium/crypto_box_curve25519xsalsa20poly1305.h>
#include <sodium/crypto_core_hsalsa20.h>
#include <sodium/crypto_core_hchacha20.h>
#include <sodium/crypto_core_salsa20.h>
#include <sodium/crypto_core_salsa2012.h>
#include <sodium/crypto_core_salsa208.h>
#include <sodium/crypto_generichash.h>
#include <sodium/crypto_generichash_blake2b.h>
#include <sodium/crypto_hash.h>
#include <sodium/crypto_hash_sha256.h>
#include <sodium/crypto_hash_sha512.h>
#include <sodium/crypto_onetimeauth.h>
#include <sodium/crypto_onetimeauth_poly1305.h>
#include <sodium/argon2.h>
#include <sodium/crypto_pwhash.h>
#include <sodium/crypto_pwhash_argon2i.h>
#include <sodium/crypto_pwhash_scryptsalsa208sha256.h>
#include <sodium/crypto_scalarmult.h>
#include <sodium/crypto_scalarmult_curve25519.h>
#include <sodium/crypto_secretbox.h>
#include <sodium/crypto_secretbox_xsalsa20poly1305.h>
#include <sodium/crypto_secretbox_xchacha20poly1305.h>
#include <sodium/crypto_shorthash.h>
#include <sodium/crypto_shorthash_siphash24.h>
#include <sodium/crypto_sign.h>
#include <sodium/crypto_sign_ed25519.h>
#include <sodium/crypto_stream.h>
#include <sodium/crypto_stream_aes128ctr.h>
#include <sodium/crypto_stream_chacha20.h>
#include <sodium/crypto_stream_salsa20.h>
#include <sodium/crypto_stream_salsa2012.h>
#include <sodium/crypto_stream_salsa208.h>
#include <sodium/crypto_stream_xchacha20.h>
#include <sodium/crypto_stream_xsalsa20.h>
#include <sodium/crypto_verify_16.h>
#include <sodium/crypto_verify_32.h>
#include <sodium/crypto_verify_64.h>
#include <sodium/randombytes.h>
#ifdef __native_client__
# include <sodium/randombytes_nativeclient.h>
#endif
#include <sodium/randombytes_salsa20_random.h>
#include <sodium/randombytes_sysrandom.h>
#include <sodium/runtime.h>
#include <sodium/utils.h>
#include <sodium/version.h>
