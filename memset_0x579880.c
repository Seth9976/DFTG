// 函数名称: _memset
// 虚拟地址: 0x579880
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (*_memset(uint32_t (* arg1)[0x4], char arg2, void* arg3))[0x4]
{
    // 第一条实际指令: void* i = arg3
    void* i = arg3
    uint32_t (* edi)[0x4] = arg1
    
    if (i != 0)
        uint32_t eax_1 = zx.d(arg2) * 0x1010101
        
        if (i u<= 0x20)
        label_57998b:
            
            while ((i & 3) != 0)
                *edi = eax_1.b
                edi += 1
                i -= 1
            
            if ((i & 4) != 0)
                *edi = eax_1
                edi = &(*edi)[1]
                i -= 4
            
            while ((i & 0xfffffff8) != 0)
                *edi = eax_1
                (*edi)[1] = eax_1
                edi = &(*edi)[2]
                i -= 8
        else
            uint32_t xmm0_2[0x4]
            
            if (i u>= 0x80)
                if (test_bit(data_6cf688, 1))
                    int32_t ecx
                    int32_t edi_1
                    edi_1, ecx = __memfill_u8(edi, eax_1.b, i)
                    return arg1
                
                if (not(test_bit(data_61f080, 1)))
                    goto label_57998b
                
                xmm0_2 = _mm_shuffle_epi32(zx.o(eax_1), 0)
                void* ecx_1 = i + edi
                *edi = xmm0_2
                edi = &edi[1] & 0xfffffff0
                i = ecx_1 - edi
                
                if (i u<= 0x80)
                    goto label_579945
                
                do
                    *edi = xmm0_2
                    edi[1] = xmm0_2
                    edi[2] = xmm0_2
                    edi[3] = xmm0_2
                    edi[4] = xmm0_2
                    edi[5] = xmm0_2
                    edi[6] = xmm0_2
                    edi[7] = xmm0_2
                    edi = &edi[8]
                    i -= 0x80
                while ((i & 0xffffff00) != 0)
                
                goto label_579950
            
        label_579945:
            
            if (not(test_bit(data_61f080, 1)))
                goto label_57998b
            
            xmm0_2 = _mm_shuffle_epi32(zx.o(eax_1), 0)
        label_579950:
            
            if (i u< 0x20)
            label_579975:
                *(edi + i - 0x20) = xmm0_2
                *(edi + i - 0x10) = xmm0_2
                return arg1
            
            do
                *edi = xmm0_2
                edi[1] = xmm0_2
                edi = &edi[2]
                i -= 0x20
            while (i u>= 0x20)
            
            if ((i & 0x1f) != 0)
                goto label_579975
    
    return arg1
}
