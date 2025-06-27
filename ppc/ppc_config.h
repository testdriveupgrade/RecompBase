//just put your PPC output in ppc directory, also replace this file
#pragma once
#ifndef PPC_CONFIG_H_INCLUDED
#define PPC_CONFIG_H_INCLUDED

#define PPC_CONFIG_SKIP_LR
#define PPC_CONFIG_CTR_AS_LOCAL
#define PPC_CONFIG_XER_AS_LOCAL
#define PPC_CONFIG_RESERVED_AS_LOCAL
#define PPC_CONFIG_SKIP_MSR
#define PPC_CONFIG_CR_AS_LOCAL
#define PPC_CONFIG_NON_ARGUMENT_AS_LOCAL
#define PPC_CONFIG_NON_VOLATILE_AS_LOCAL

#define PPC_IMAGE_BASE 0x82000000ull
#define PPC_IMAGE_SIZE 0x1730000ull
#define PPC_CODE_BASE 0x823E0000ull
#define PPC_CODE_SIZE 0x7B313Cull

#ifdef PPC_INCLUDE_DETAIL
#include "ppc_detail.h"
#endif

#endif
