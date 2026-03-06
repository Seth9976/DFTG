// 函数名称: sub_4d40c0
// 虚拟地址: 0x4d40c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4d40c0(int32_t*** arg1)
{
    // 第一条实际指令: int32_t** eax = sub_4d30b0(arg1[1])
    int32_t** eax = sub_4d30b0(arg1[1])
    int32_t* eax_1 = arg1[1]
    *arg1 = eax
    char const* const var_2c
    int32_t var_28
    char const* const var_24_1
    int32_t* eax_2
    char* ecx_1
    
    if (eax_1 != 3)
        if (eax_1 != 0x19)
            if (eax_1 != 5)
                return eax_1
            
            return sub_4efcd0(eax)
        
        char* eax_17 = sub_4d4bb0(eax[1])
        int32_t* esi_3 = *eax
        sub_4cea80(eax_17, eax[3], esi_3, 0)
        
        if (esi_3 != 0)
            _aligned_free_base(esi_3)
        
        eax_2 = sub_4d7f80(eax[3])
        
        if (eax_2 != 0)
            void* edx_8 = eax[3]
            eax[1] = eax_2
            int32_t* eax_18 = sub_4d60d0(eax_2, edx_8)
            *eax = eax_18
            return eax_18
        
        var_24_1 = "ParticleMakeDatalessFailureAsset"
        var_28 = 0xabf
        var_2c = "d:\ax\trunk\ax2017\engine\particle.cpp"
        ecx_1 = "pParseTree"
    else
        eax_2 = sub_586f5f(0x50, 0x10)
        
        if (eax_2 != 0)
            uint32_t (* eax_3)[0x4] = sub_4ce680(eax_2, data_12baafc)
            *eax_2 = 0x20
            eax_2[1] = 0x20
            eax_2[4] = 1
            eax_2[5] = 8
            eax_2[6] = 1
            eax_2[7] = 0
            eax_2[0xf] = 1
            int32_t eax_4 = sub_5235a0(eax_3, 0x20, 0x20, 1)
            int32_t* eax_5 = sub_4c2e40(0x10)
            *eax_5 = zx.o(0)
            eax_2[0x12] = eax_5
            *eax_5 = eax_4
            *(eax_2[0x12] + 8) = sub_4c2e40(eax_4)
            int32_t* esi_2 = *(eax_2[0x12] + 8)
            int32_t i = 0
            int32_t i_1 = 0
            
            if (eax_2[1] s> 0)
                do
                    int32_t j = 0
                    
                    if (*eax_2 s> 0)
                        int32_t eax_8
                        int32_t edx_2
                        edx_2:eax_8 = sx.q(i)
                        
                        do
                            int32_t eax_10
                            int32_t edx_4
                            edx_4:eax_10 = sx.q(j)
                            int32_t eax_14 = 0xffff00ff
                            
                            if (((((eax_10 + (edx_4 & 3)) s>> 2).b + (((edx_2 & 3) + eax_8) s>> 2).b)
                                    & 1) != 0)
                                eax_14 = 0xff00ff00
                            
                            j += 1
                            *esi_2 = eax_14
                            esi_2 = &esi_2[1]
                        while (j s< *eax_2)
                        
                        i = i_1
                    
                    i += 1
                    i_1 = i
                while (i s< eax_2[1])
            
            int32_t** eax_16 = *eax
            *eax_16 = eax_2
            return eax_16
        
        var_24_1 = "XMalloc"
        var_28 = 0x57
        var_2c = "d:\ax\trunk\ax2017\engine\xmemory.cpp"
        ecx_1 = "pBuffer"
    
    sub_489550(eax_2, &data_5b2591, ecx_1, var_2c, var_28, var_24_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
