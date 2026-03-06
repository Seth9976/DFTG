// 函数名称: sub_49a970
// 虚拟地址: 0x49a970
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_49a970(uint32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d548
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = *(arg1 + 0x1400)
    void* result
    
    if (arg2 s>= ecx)
        int32_t eax_5 = *(arg1 + 0x1190)
        
        if (arg2 != eax_5)
            sub_489550(eax_5, &data_5b2591, "idx == parent.numChildren", 
                "d:\ax\trunk\ax2017\engine\ui2.cpp", 0xc27, "UI2GetOrAllocChild")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (arg2 != ecx)
            sub_489550(eax_5, &data_5b2591, "idx == parent.numTotalChildren", 
                "d:\ax\trunk\ax2017\engine\ui2.cpp", 0xc28, "UI2GetOrAllocChild")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (eax_5 s>= 0x96)
            sub_489550(eax_5, &data_5b2591, "parent.numChildren < MAX_CHILDREN", 
                "d:\ax\trunk\ax2017\engine\ui2.cpp", 0xc29, "UI2GetOrAllocChild")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* result_1 = sub_49a850(arg1)
        sub_4a3580(result_1)
        char* ecx_4 = *(arg1 + 0xfd8)
        char* const edx_1 = &data_5b2591
        
        if (ecx_4 != 0)
            edx_1 = ecx_4
        
        char* const var_28_1 = edx_1
        int32_t var_8_1 = 0
        char* var_14
        sub_48a560(result_1 + 0xfd8, sub_48a9d0(&var_14, "just allocated, parent:%s"))
        int32_t var_8_2 = 1
        
        if (data_aca1f4 != 0)
            char* eax_7 = var_14
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_48a080(&var_14)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
        
        result = result_1
    else
        int32_t ecx_1 = *(arg1 + (arg2 << 2) + 0x1194)
        
        if (arg2 s>= *(arg1 + 0x1190))
            eax_3 = arg2 + 1
            *(arg1 + 0x1190) = eax_3
        
        if (ecx_1 == 0)
            sub_489550(eax_3, &data_5b2591, "id != DATAID_NULL", 
                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6c, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        uint32_t edx = zx.d(ecx_1.w)
        int32_t edi_1
        
        if (edx u< data_63e5ac)
            edi_1 = data_63e5a8
            eax_3 = edx * 0x1418
        
        if (edx u>= data_63e5ac || *(eax_3 + edi_1 + 0x1410) != ecx_1)
            sub_489550(eax_3, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result = edx * 0x1418 + edi_1
        
        if (*(result + 0x112c) != arg1)
            sub_489550(result, &data_5b2591, "ui.parent == &parent", 
                "d:\ax\trunk\ax2017\engine\ui2.cpp", 0xc21, "UI2GetOrAllocChild")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
