// 函数名称: sub_571f60
// 虚拟地址: 0x571f60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t*sub_571f60(int32_t* arg1, int32_t arg2, char* arg3, char* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg2 u> 6)
        int32_t var_2c_3 = arg2
        void var_18
        int32_t edx
        sub_41da20(&var_18, edx, arg4, &var_18, &data_5efc90)
        sub_526f70(&var_18, "Unknown attachment type: ", arg1, &var_18)
        @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t* eax_3
    
    switch (arg2)
        case 0
            eax_3 = sub_527b60(arg1[3], arg4)
            
            if (eax_3 == 0)
            label_572024:
                sub_526f70(eax_3, "Region not found: ", arg1, arg4)
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return 0
            
            int32_t* eax_4 = sub_526e30(arg3)
            int32_t* var_2c = eax_4
            eax_4[0x11] = eax_3
            sub_526ed0(eax_4, eax_3[0xe], eax_4, eax_3[5], eax_3[6], eax_3[7], eax_3[8])
            eax_4[0x12] = eax_3[9]
            eax_4[0x13] = eax_3[0xa]
            eax_4[0x14] = eax_3[3]
            eax_4[0x15] = eax_3[4]
            eax_4[0x16] = eax_3[0xb]
            eax_4[0x17] = eax_3[0xc]
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_4
        case 1
            int32_t* eax_23 = sub_576720(arg3)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_23
        case 2, 3
            eax_3 = sub_527b60(arg1[3], arg4)
            
            if (eax_3 == 0)
                goto label_572024
            
            uint32_t (* eax_13)[0x4] = sub_572540(arg3)
            eax_13[3][0] = eax_3
            (*eax_13)[0x13] = eax_3[5]
            eax_13[5][0] = eax_3[6]
            (*eax_13)[0x15] = eax_3[7]
            (*eax_13)[0x16] = eax_3[8]
            (*eax_13)[0x17] = eax_3[0xe]
            eax_13[6][0] = eax_3[0xf]
            (*eax_13)[0xd] = eax_3[9]
            (*eax_13)[0xe] = eax_3[0xa]
            (*eax_13)[0xf] = eax_3[3]
            eax_13[4][0] = eax_3[4]
            (*eax_13)[0x11] = eax_3[0xb]
            (*eax_13)[0x12] = eax_3[0xc]
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_13
        case 4
            int32_t* eax_24 = sub_5768b0(arg3)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_24
        case 5
            int32_t* eax_25 = sub_5766a0(arg3)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_25
        case 6
            int32_t* eax_26 = sub_576560(arg3)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return eax_26
}
