// 函数名称: sub_4d25b0
// 虚拟地址: 0x4d25b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d25b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59ffe8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c
    int32_t* var_34 = &var_1c
    int32_t* var_14
    sub_4889e0(&var_14, arg1, 3)
    int32_t var_8_1 = 0
    int32_t* ebx = *var_1c
    int32_t ecx_1 = ebx[0xf]
    int32_t temp0 = divs.dp.d(sx.q(ecx_1), ebx[4])
    int32_t edx_1 = ebx[7]
    int32_t var_18 = temp0
    int32_t edi = temp0
    
    if (edx_1 == 3 || edx_1 == 5 || edx_1 == 4 || edx_1 == 6)
        edi = 1
        var_18 = 1
    label_4d2661:
        int32_t* ecx_5 = (*(*data_114ec78 + 0x10))(arg1, *ebx, ebx[1], edi, ebx[4], ebx[6], edx_1)
        var_1c = ecx_5
        
        if (ecx_5 != 0)
            int32_t eax_11 = ebx[7]
            
            if (eax_11 == 0)
                if (edi == 1)
                    eax_11 = ebx[4]
                
                if (edi == 1 && eax_11 == ebx[0xf])
                    goto label_4d26c5
                
                sub_489550(eax_11, &data_5b2591, 
                    "depthCount == 1 && pTextureData->mipLevelCount == pTextureData->imageCount", 
                    "d:\ax\trunk\ax2017\engine\texture.cpp", 0x1f0, "TextureCreateTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (eax_11 == 1)
                if (edi == 6)
                    goto label_4d26c9
                
                sub_489550(eax_11, &data_5b2591, "depthCount == 6", 
                    "d:\ax\trunk\ax2017\engine\texture.cpp", 0x1f4, "TextureCreateTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (eax_11 == 2)
                sub_489550(eax_11, 
                    "Yeah, this doesn't work yet. The depth changes for each mip level so this needs a "
                "special loader.", 
                    "HaltMsg", "d:\ax\trunk\ax2017\engine\texture.cpp", 0x1f8, 
                    "TextureCreateTextureBuffer")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (eax_11 == 3 || eax_11 == 5 || eax_11 == 4 || eax_11 == 6)
                int32_t* eax_16 = var_14
                
                if (eax_16 != 0)
                    eax_16[7] -= 1
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return ecx_5
            
        label_4d26c5:
            
            if (edi s> 0)
            label_4d26c9:
                int32_t eax_12 = ebx[4]
                int32_t edi_1 = 0
                int32_t edx_2 = var_18
                
                do
                    int32_t esi_1 = 0
                    
                    if (eax_12 s> 0)
                        do
                            sub_4d2170(eax_12, ecx_5, arg1, edi_1, esi_1)
                            eax_12 = ebx[4]
                            esi_1 += 1
                            ecx_5 = var_1c
                        while (esi_1 s< eax_12)
                        
                        edx_2 = var_18
                    
                    edi_1 += 1
                while (edi_1 s< edx_2)
            
            if (ebx[8] == 0 && ebx[5] != 8)
                char* eax_13 = arg1[8]
                char* const ecx_7 = &data_5b2591
                
                if (eax_13 != 0)
                    ecx_7 = eax_13
                
                char* const var_34_3 = ecx_7
                sub_4892e0("Autogeneration of mipmaps is not implemented on load for %s")
            
            int32_t* eax_14 = var_14
            
            if (eax_14 != 0)
                eax_14[7] -= 1
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return var_1c
    else if (ecx_1 s>= 1)
        goto label_4d2661
    
    int32_t* eax_7 = var_14
    
    if (eax_7 != 0)
        eax_7[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
