// 函数名称: sub_43a400
// 虚拟地址: 0x43a400
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_43a400(int32_t* arg1, double arg2)
{
    // 第一条实际指令: int32_t k_1
    int32_t k_1
    int32_t eax_1 = __security_cookie ^ &k_1
    
    if ((data_138a708 | data_138a70c) == 0)
        for (void* i = &data_1304620; i s< &data_130a660; )
            int32_t j_1 = 7
            int32_t j
            
            do
                k_1 = 0x28
                int32_t k
                
                do
                    int32_t eax_5
                    int32_t edx_1
                    edx_1:eax_5 = sx.q(_rand())
                    int32_t eax_7
                    int32_t edx_2
                    edx_2:eax_7 = sx.q(_rand())
                    int32_t eax_10
                    int32_t edx_4
                    edx_4:eax_10 = sx.q(_rand())
                    int32_t eax_12
                    int32_t edx_5
                    edx_5:eax_12 = sx.q(_rand())
                    *i = eax_5 ^ eax_7 << 0x10
                    *(i + 4) = eax_12 << 0x10 ^ edx_1 ^ (edx_2 << 0x10 | eax_7 u>> 0xfffffff0) ^ eax_10
                    i += 8
                    k = k_1
                    k_1 -= 1
                while (k != 1)
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        for (void* i_1 = &data_13902f0; i_1 s< &data_1390320; i_1 += 8)
            int32_t eax_16
            int32_t edx_6
            edx_6:eax_16 = sx.q(_rand())
            int32_t eax_18
            int32_t edx_7
            edx_7:eax_18 = sx.q(_rand())
            int32_t eax_21
            int32_t edx_9
            edx_9:eax_21 = sx.q(_rand())
            int32_t eax_23
            int32_t edx_10
            edx_10:eax_23 = sx.q(_rand())
            *i_1 = eax_16 ^ eax_18 << 0x10
            *(i_1 + 4) = eax_23 << 0x10 ^ edx_6 ^ (edx_7 << 0x10 | eax_18 u>> 0xfffffff0) ^ eax_21
        
        for (void* i_2 = &data_1410468; i_2 s< &data_1410698; i_2 += 8)
            int32_t eax_27
            int32_t edx_11
            edx_11:eax_27 = sx.q(_rand())
            int32_t eax_29
            int32_t edx_12
            edx_12:eax_29 = sx.q(_rand())
            int32_t eax_32
            int32_t edx_14
            edx_14:eax_32 = sx.q(_rand())
            int32_t eax_34
            int32_t edx_15
            edx_15:eax_34 = sx.q(_rand())
            *i_2 = eax_27 ^ eax_29 << 0x10
            *(i_2 + 4) = eax_34 << 0x10 ^ edx_11 ^ (edx_12 << 0x10 | eax_29 u>> 0xfffffff0) ^ eax_32
        
        int32_t eax_38
        int32_t edx_16
        edx_16:eax_38 = sx.q(_rand())
        int32_t eax_40
        int32_t edx_17
        edx_17:eax_40 = sx.q(_rand())
        int32_t eax_43
        int32_t edx_19
        edx_19:eax_43 = sx.q(_rand())
        int32_t eax_45
        int32_t edx_20
        edx_20:eax_45 = sx.q(_rand())
        data_138a708 = eax_38 ^ eax_40 << 0x10
        data_138a70c = eax_45 << 0x10 ^ edx_16 ^ (edx_17 << 0x10 | eax_40 u>> 0xfffffff0) ^ eax_43
    
    void* result = *arg1
    int32_t ecx_5 = data_1512a00
    
    if (ecx_5 != *(result + 4))
        if (ecx_5 s> 0)
            sub_450e80(&data_1410698)
            sub_450e80(0x138a668)
        
        int32_t ecx_7
        int32_t edx_21
        ecx_7, edx_21 = sub_439520(arg1, arg2)
        void* eax_48 = *arg1
        int32_t esi_13 = *(eax_48 + 4)
        int32_t edi_13 = *(eax_48 + 8)
        int32_t var_82c_1 = esi_13
        int32_t var_830_1 = edi_13
        void var_810
        sub_41da20(&var_810, edx_21, ecx_7, &var_810, "res/net/dftg.eval.%d.%d.net")
        int32_t ecx_9
        int32_t edx_23
        ecx_9, edx_23 = sub_488d70(&data_1410698, sub_4d0b50(&var_810, 0x1c))
        int32_t var_83c_1 = esi_13
        int32_t var_840_1 = edi_13
        sub_41da20(&var_810, edx_23, ecx_9, &var_810, "res/net/dftg.role.%d.%d.net")
        int32_t ecx_11
        int32_t edx_25
        ecx_11, edx_25 = sub_488d70(0x138a668, sub_4d0b50(&var_810, 0x1c))
        
        if (not(arg2 <= 0.0))
            int32_t* eax_53 = *arg1
            int32_t var_82c_2 = *eax_53
            int32_t var_830_2 = eax_53[1]
            int32_t var_834_1 = eax_53[2]
            void var_410
            sub_41da20(&var_410, edx_25, ecx_11, &var_410, "training/eval.out.%d.%d.%d")
            int32_t eax_55
            int32_t edx_26
            eax_55, edx_26 = _fopen(&var_410, U"w")
            data_138fd4c = eax_55
            int32_t* eax_56 = *arg1
            int32_t var_834_2 = *eax_56
            int32_t var_838_2 = eax_56[1]
            int32_t var_83c_3 = eax_56[2]
            sub_41da20(&var_410, edx_26, &data_57f87b, &var_410, "training/role.out.%d.%d.%d")
            data_1450b5c = _fopen(&var_410, U"w")
        
        result = *(*arg1 + 4)
        data_1512a00 = result
    
    @__security_check_cookie@4(eax_1 ^ &k_1)
    return result
}
