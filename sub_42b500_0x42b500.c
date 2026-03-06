// 函数名称: sub_42b500
// 虚拟地址: 0x42b500
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_42b500(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi = arg1
    sub_4b2440(esi, sub_42af70)
    int32_t edi = 4
    int32_t eax_3 = *(data_6d00d8 + 0xbe0)
    
    if (eax_3 s< 4)
        edi = eax_3
    
    int32_t var_a4 = edi
    int32_t eax_4
    eax_4.b = edi s< 4
    int32_t eax_5 = eax_4 + edi
    sub_4a8830(eax_5, &data_62bbf0, esi, eax_5, 0xffffffff)
    void* result = sub_437f10(*(data_6d00d8 + 0xbe4))
    int32_t ebx = 0
    void* result_1 = result
    char const* const var_c0_3
    int32_t var_bc_2
    char const* const var_b8_5
    char* ecx_13
    
    if (edi s<= 0)
    label_42b6a7:
        
        if (edi s>= 4)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        void var_98
        int32_t eax_11 = sub_426ed0(&var_98 + edi * 0x24, esi, "tbl_profiles", edi)
        result = sub_4bab10(var_a4)
        
        if (result == eax_11)
            if (eax_11 != 0)
                int32_t var_b8_6 = 0xffffffff
                result = sub_4a8570(eax_11)
            
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return result
        
        var_b8_5 = "UI2Selector::LookupForce"
        var_bc_2 = 0x173
        var_c0_3 = "d:\ax\trunk\ax2017\engine\ui2.h"
        ecx_13 = "UI2GetHandle(arg_root, arg_name, arg_idx) == retval"
    label_42b736:
        sub_489550(result, &data_5b2591, ecx_13, var_c0_3, var_bc_2, var_b8_5)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx_4 = 0
    void var_94
    void* esi_1 = &var_94
    int32_t var_9c_1 = 0
    
    while (true)
        void* result_3
        
        if (*esi_1 == "tbl_profiles" && *(esi_1 - 4) == arg1 && *(esi_1 + 4) == ebx
                && *(esi_1 + 8) == 0)
            result_3 = *(esi_1 + 0x1c)
            
            if (result_3 == 0)
                goto label_42b5da
            
            uint32_t eax_7 = zx.d(result_3.w)
            
            if (eax_7 u>= data_63e5ac)
                goto label_42b5da
            
            result = eax_7 * 0x1418 + data_63e5a8
            
            if (*(result + 0x1410) == result_3)
                goto label_42b60b
            
            goto label_42b5da
        
    label_42b5da:
        result = sub_4bab10(ebx)
        ecx_4 = var_9c_1
        result_3 = result
        *(esi_1 + 0x1c) = result_3
        
        if (result_3 != 0)
            result = arg1
            *esi_1 = "tbl_profiles"
            *(esi_1 - 4) = result
            *(esi_1 + 4) = ebx
            *(esi_1 + 8) = 0
        label_42b60b:
            
            if (result_3 != 0)
                if (ecx_4 s< 0)
                label_42b6e1:
                    var_b8_5 = "GetProfileBySlot"
                    var_bc_2 = 0x1ff
                    var_c0_3 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesettings.cpp"
                    ecx_13 = "retval"
                    break
                
                result = data_6d00d8
                
                if (ebx s>= *(result + 0xbe0))
                    goto label_42b6e1
                
                void* result_4 = result
                result += ecx_4
                void* result_2 = result
                
                if (result_4 == neg.d(ecx_4))
                    goto label_42b6e1
                
                sub_4a8930(result, &data_62bc0c, result_3, result, 0xffffffff)
                sub_465a40(*(result_2 + 8))
                int32_t var_c0_1 = 0xffffffff
                sub_4a8570(result_3)
                result = result_1
                
                if (result_2 == result)
                    int32_t var_b8_2 = 0xffffffff
                    result = sub_4a8570(result_3)
                
                ecx_4 = var_9c_1
        
        edi = var_a4
        ebx += 1
        ecx_4 += 0x2f8
        esi_1 += 0x24
        var_9c_1 = ecx_4
        
        if (ebx s>= edi)
            esi = arg1
            goto label_42b6a7
    
    goto label_42b736
}
