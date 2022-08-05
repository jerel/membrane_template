/*
 * AUTO GENERATED FILE, DO NOT EDIT
 *
 * Generated by `membrane`
 */
#include <stdint.h>

#ifndef __MEMBRANE_TYPES_INCLUDED__
#define __MEMBRANE_TYPES_INCLUDED__

typedef enum MembraneMsgKind {
  Ok,
  Error,
} MembraneMsgKind;

typedef enum MembraneResponseKind {
  Data,
  Panic,
} MembraneResponseKind;

typedef struct MembraneResponse
{
  uint8_t kind;
  const void *data;
} MembraneResponse;

uint8_t membrane_cancel_membrane_task(const void *task_handle);
uint8_t membrane_free_membrane_vec(int64_t len, const void *ptr);

#endif