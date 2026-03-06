// 函数名称: sub_53d1b0
// 虚拟地址: 0x53d1b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_53d1b0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2e60
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* arg_4
    int32_t* edi_1 = arg_4
    int32_t* var_28 = &var_14
    sub_4889e0(&arg_4, edi_1, 3)
    int32_t var_8_1 = 0
    int32_t* esi_1 = var_14
    int32_t* ecx_1 = *esi_1
    void* const esi_2
    
    if (ecx_1 != 0)
        int32_t* ecx_2 = ecx_1[0xa]
        int32_t* edx_1
        
        if (ecx_2 == 0)
            edx_1 = esi_1[2]
            
            if (edx_1 == 0)
                edx_1 = sub_4d25b0(edi_1)
                esi_1[2] = edx_1
            
            int32_t var_8_4 = 0xffffffff
            int32_t* eax_6 = arg_4
            
            if (eax_6 != 0)
                eax_6[7] -= 1
                arg_4 = nullptr
        else
            int32_t var_8_3 = 0xffffffff
            edx_1 = sub_4d2a30(ecx_2)
            int32_t* ecx_3 = arg_4
            
            if (ecx_3 != 0)
                ecx_3[7] -= 1
                arg_4 = nullptr
        
        void* eax_7 = data_1151ae8
        
        if (edx_1 != 0)
            uint32_t ecx_5 = zx.d(edx_1.w)
            
            if (ecx_5 u< *(eax_7 + 0x3c))
                esi_2 = ecx_5 * 0x24c + *(eax_7 + 0x38)
                
                if (*(esi_2 + 0x248) != edx_1)
                    esi_2 = nullptr
            else
                esi_2 = nullptr
        else
            esi_2 = nullptr
    else
        int32_t var_8_2 = 0xffffffff
        int32_t* eax_3 = arg_4
        
        if (eax_3 == 0)
            esi_2 = nullptr
        else
            eax_3[7] -= 1
            esi_2 = nullptr
            arg_4 = ecx_1
    
    int32_t** var_28_1 = &var_14
    sub_4889e0(&arg_4, arg2, 3)
    int32_t var_8_5 = 1
    int32_t* edi_2 = var_14
    void* eax_8 = *edi_2
    int32_t* eax_9
    void* const edi_3
    
    if (eax_8 != 0)
        int32_t* ecx_7 = *(eax_8 + 0x28)
        int32_t* edx_2
        
        if (ecx_7 == 0)
            edx_2 = edi_2[2]
            
            if (edx_2 == 0)
                edx_2 = sub_4d25b0(arg2)
                edi_2[2] = edx_2
            
            int32_t var_8_8 = 0xffffffff
            int32_t* eax_12 = arg_4
            
            if (eax_12 != 0)
                eax_12[7] -= 1
                arg_4 = nullptr
        else
            int32_t var_8_7 = 0xffffffff
            edx_2 = sub_4d2a30(ecx_7)
            int32_t* ecx_8 = arg_4
            
            if (ecx_8 != 0)
                ecx_8[7] -= 1
                arg_4 = nullptr
        
        eax_9 = data_1151ae8
        
        if (edx_2 != 0)
            uint32_t ecx_10 = zx.d(edx_2.w)
            
            if (ecx_10 u< eax_9[0xf])
                edi_3 = ecx_10 * 0x24c + eax_9[0xe]
                eax_9 = nullptr
                
                if (*(edi_3 + 0x248) != edx_2)
                    edi_3 = nullptr
            else
                edi_3 = nullptr
        else
            edi_3 = nullptr
    else
        int32_t var_8_6 = 0xffffffff
        eax_9 = arg_4
        
        if (eax_9 == 0)
            edi_3 = nullptr
        else
            eax_9[7] -= 1
            edi_3 = nullptr
            arg_4 = nullptr
    
    if (arg2[1] == 3)
        int32_t eax_14 = sub_53a3b0(*(*sub_4981f0(arg2) + 0x18))
        int32_t* ecx_15 = *(data_1151ae8 + 8)
        int32_t result =
            (*(*ecx_15 + 0xe4))(ecx_15, *(edi_3 + 0x1c), 0, *(esi_2 + 0x1c), 0, eax_14, eax_2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_489550(eax_9, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
        "d:\ax\trunk\ax2017\engine\texture.h", 0x86, "TextureGetDef")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
