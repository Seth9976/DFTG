// 函数名称: sub_421710
// 虚拟地址: 0x421710
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_421710(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?shortsort@@YAXPAD0IP6AHPBX1@Z@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result = data_6cfe4c
    
    if (result == 0)
        sub_489550(result, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (*(result + 0xa68) != arg1)
        *(result + 0xa68) = arg1
        void* esi_1 = &sub_425de0()[2]
        void* eax_4 = sub_425fe0(esi_1, arg1)
        void var_18
        void* var_28_1 = &var_18
        char* const ecx_2 = &data_5b2591
        char* var_14
        char* eax_6 = *sub_421310(eax_4, esi_1, &var_14, eax_4)
        
        if (eax_6 != 0)
            ecx_2 = eax_6
        
        char* const var_30_1 = ecx_2
        int32_t var_34_1 = arg1
        sub_4892e0("set active turn %d %s")
        int32_t var_8_1 = 0
        
        if (data_aca1f4 != 0)
            char* eax_7 = var_14
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_48a080(&var_14)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_14 = &data_5b2591
        
        int32_t var_8_2 = 0xffffffff
        result = data_6cfe4c
        
        if (result == 0)
            sub_489550(result, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (*(result + 0x834) != 0)
            result = sub_425de0()
            int32_t edx_5 = 0
            int32_t i_1 = *(result + 0xec)
            
            if (i_1 s> 0)
                result += 0x24
                int32_t i
                
                do
                    int32_t ecx_5 = *result
                    
                    if (ecx_5 == 0x3e8 || ecx_5 == 0x3e9)
                        edx_5 += 1
                    
                    result += 0x2c
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            if (edx_5 s> 1)
                data_62b220 = 0x16
                result = sub_4360b0((zx.o(0)).d)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
