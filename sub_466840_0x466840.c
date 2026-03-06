// 函数名称: sub_466840
// 虚拟地址: 0x466840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_466840(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* result = sub_452b90(arg2)
    void* result_1 = result
    
    if (arg1 != 0)
        void* ecx_1 = data_6cfe4c
        
        if (ecx_1 == 0)
            sub_489550(result, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        void* result_2 = *(ecx_1 + 0xa68)
        
        if (arg2 != result_2)
            int32_t eax_2 = data_632590
            
            if (eax_2 == 6 || eax_2 == 2 || eax_2 == 3 || eax_2 == 1 || data_632a09:1.b != 0)
                int32_t var_38_1 = 0xffffffff
                sub_4a8570(arg1)
        
        for (int32_t i = 0; i s< 5; i += 1)
            int32_t* eax_3 = sub_452ed0(result_1, i + 9)
            
            if (eax_3 s> 0xf)
                int32_t var_40_1 = 0xffffffff
                sub_4a8830(sub_4a8830(eax_3, &data_6389ec, arg1, 5, 0xffffffff), &data_63889c, arg1, 5, 
                    0xffffffff)
            else if (eax_3 s> 8)
                int32_t var_40_2 = 0xffffffff
                sub_4a8830(sub_4a8830(eax_3, &data_6389ec, arg1, 4, 0xffffffff), &data_63889c, arg1, 4, 
                    0xffffffff)
            
            void** var_1c = &data_637fc0
            void** var_18_1 = &data_637fdc
            void** var_14_1 = &data_637ff8
            void** var_10_1 = &data_638014
            void** var_c_1 = &data_638030
            (&var_1c)[i]
            int32_t i_1 = i
            sub_4a8570(arg1)
            
            if (*(result_1 + 0xbe0) == i + 1)
                int32_t i_2 = i
                sub_4a8570(arg1)
            
            int32_t ecx_9 = data_63258c
            int32_t eax_7 = 0
            
            if (ecx_9 s> 0)
                do
                    if (*((eax_7 << 2) + &data_632578) == i + 1)
                        result = result_2
                        
                        if (arg2 != result)
                            goto label_4669a3
                        
                        goto label_466998
                    
                    eax_7 += 1
                while (eax_7 s< ecx_9)
            
        label_466998:
            int32_t i_3 = i
            result = sub_4a8570(arg1)
        label_4669a3:
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
