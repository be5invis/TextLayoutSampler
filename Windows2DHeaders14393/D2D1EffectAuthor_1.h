//---------------------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This file is automatically generated.  Please do not edit it directly.
//
// File name: D2D1EffectAuthor_1.h
//---------------------------------------------------------------------------
#ifdef _MSC_VER
#pragma once
#endif // #ifdef _MSC_VER

#ifndef _D2D1_EFFECT_AUTHOR_1_H_
#define _D2D1_EFFECT_AUTHOR_1_H_

#ifndef _D2D1_3_H_
#include <d2d1_3.h>
#endif // #ifndef _D2D1_3_H_
#ifndef _D2D1_EFFECT_AUTHOR_H_
#include <d2d1effectauthor.h>
#endif // #ifndef _D2D1_EFFECT_AUTHOR_H_

EXTERN_C CONST IID IID_ID2D1EffectContext1;


#ifndef D2D_USE_C_DEFINITIONS


/// <summary>
/// The internal context handed to effect authors to create transforms from effects
/// and any other operation tied to context which is not useful to the application
/// facing API.
/// </summary>
interface DX_DECLARE_INTERFACE("84ab595a-fc81-4546-bacd-e8ef4d8abe7a") ID2D1EffectContext1  : public ID2D1EffectContext
{
    
    /// <summary>
    /// Creates a 3D lookup table for mapping a 3-channel input to a 3-channel output.
    /// The table data must be provided in 4-channel format.
    /// </summary>
    STDMETHOD(CreateLookupTable3D)(
        D2D1_BUFFER_PRECISION precision,
        _In_reads_(3) CONST UINT32 *extents,
        _In_reads_(dataCount) CONST BYTE *data,
        UINT32 dataCount,
        _In_reads_(2) CONST UINT32 *strides,
        _COM_Outptr_ ID2D1LookupTable3D **lookupTable 
        ) PURE;
}; // interface ID2D1EffectContext1



#endif


#ifdef D2D_USE_C_DEFINITIONS


typedef interface ID2D1EffectContext1 ID2D1EffectContext1;

#endif

#endif // #ifndef _D2D1_EFFECT_AUTHOR_1_H_
