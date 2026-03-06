// 函数名称: sub_524440
// 虚拟地址: 0x524440
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_524440(int32_t arg1, int32_t* arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: int128_t var_2c
    int128_t var_2c
    __builtin_memset(&var_2c, 0, 0x14)
    
    if (sub_524930(&var_2c, arg4) != 0)
        int32_t eax_1 = var_2c.d
        *arg3 = 8
        
        if (eax_1 != 0)
            _aligned_free_base(eax_1)
        
        int32_t eax_2 = arg3[1]
        int32_t var_8_1 = eax_2
        
        if (eax_2 == 0)
            int32_t var_1c
            int32_t esi_1 = var_1c
            
            if (esi_1 == 5)
                esi_1 = 4
            
            var_8_1 = esi_1
        
        int32_t* eax_3 = _fopen(arg4, "rb")
        
        if (eax_3 != 0)
            _fseek(eax_3, 0, 2)
            int32_t* var_48_1 = eax_3
            uint32_t eax_4 = sub_587c01()
            _fseek(eax_3, 0, 0)
            
            if (eax_4 == 0)
                char* var_3c_3 = arg4
                sub_4892e0("file too small: %s")
                _fclose(eax_3)
                int32_t eax_5
                eax_5.b = 0
                return eax_5
            
            uint32_t (* eax_6)[0x4] = sub_4c2e40(eax_4)
            uint32_t eax_7 = _fread(eax_6, 1, eax_4, eax_3)
            _fclose(eax_3)
            
            if (eax_7 == eax_4)
                *arg2 = var_2c:4.d
                arg2[1] = var_2c:8.d
                arg2[4] = 1
                arg2[0xf] = 1
                int128_t* eax_11 = sub_4c2e40(0x10)
                *eax_11 = zx.o(0)
                arg2[0x12] = eax_11
                arg2[5] = sub_523d70(arg4)
                arg2[6] = var_8_1
                int32_t* eax_14 = arg2[0x12]
                arg2[7] = 0
                *eax_14 = eax_4
                *(arg2[0x12] + 8) = eax_6
                arg2[8] = arg3[2]
                arg2[9] = arg3[3]
                int32_t eax_17
                eax_17.b = 1
                return eax_17
            
            char* var_3c_5 = arg4
            sub_4892e0("failed to read: %s")
            
            if (eax_6 != 0)
                _aligned_free_base(eax_6)
                int32_t eax_8
                eax_8.b = 0
                return eax_8
        else
            char* var_3c_2 = arg4
            sub_4892e0("failed to open file: %s")
    
    return 0
}
