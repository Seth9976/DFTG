// 函数名称: sub_4442f0
// 虚拟地址: 0x4442f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4442f0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t result = __security_cookie ^ &__saved_ebp
    int32_t result_1 = result
    
    if (data_15129fc == 0)
        int32_t* eax_1 = data_138fd4c
        int32_t ecx
        int32_t edx
        
        if (eax_1 != 0)
            ecx, edx = _fclose(eax_1)
        
        int32_t* eax_2 = data_1450b5c
        
        if (eax_2 != 0)
            ecx, edx = _fclose(eax_2)
        
        int32_t var_40c_3 = data_13902dc
        data_15129fc = 1
        int32_t var_410_1 = data_13902e8
        void var_408
        sub_41da20(&var_408, edx, ecx, &var_408, "Role hit: %d, Role miss: %d\n")
        int32_t eax_4
        int32_t ecx_1
        int32_t edx_1
        eax_4, ecx_1, edx_1 = sub_4892e0(&var_408)
        int32_t var_420_1 = data_138fd58
        int32_t var_424_1 = data_138fd5c
        int32_t eax_5
        int32_t edx_2
        eax_5, edx_2 = sub_4394f0(eax_4, edx_1, ecx_1, "Explore hash hit: %d, miss: %d\n")
        int32_t var_42c_1 = data_14d0b60
        int32_t var_430_1 = data_138a71c
        int32_t eax_6
        int32_t edx_3
        eax_6, edx_3 = sub_4394f0(eax_5, edx_2, ecx_1, "Produce hash hit: %d, miss: %d\n")
        int32_t var_438_1 = data_12bae0c
        int32_t var_43c_1 = data_1390324
        int32_t eax_7
        int32_t edx_4
        eax_7, edx_4 = sub_4394f0(eax_6, edx_3, ecx_1, "Ship hash hit: %d, miss: %d\n")
        int32_t var_444_1 = data_138a700
        int32_t var_448_1 = data_138a664
        int32_t eax_8
        int32_t edx_5
        eax_8, edx_5 = sub_4394f0(eax_7, edx_4, ecx_1, "Recruit hash hit: %d, miss: %d\n")
        int32_t var_40c_4 = data_13902e0
        int32_t var_410_2 = data_13902ec
        result = sub_4394f0(eax_8, edx_5, ecx_1, "Recall hash hit: %d, miss: %d\n")
    
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
