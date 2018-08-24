#pragma once

#include <ntddk.h>
#include <wdf.h>
#define RESHUB_USE_HELPER_ROUTINES
#include <reshub.h>
#include <gpio.h>

#define INITCODE __declspec(code_seg("init"))
#define PAGED __declspec(code_seg("paged"))

#define RETURN_IF_NOT_SUCCESS(_status) { NTSTATUS __tmpStatus = (_status); if(__tmpStatus != STATUS_SUCCESS) { return __tmpStatus; } };
