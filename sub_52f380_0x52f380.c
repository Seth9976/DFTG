// 函数名称: sub_52f380
// 虚拟地址: 0x52f380
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_52f380(int32_t* arg1)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (arg1[6] s> 0)
        do
            _free(*(arg1[7] + (i << 2)))
            i += 1
        while (i s< arg1[6])
    
    _free(arg1[7])
    int32_t i_1 = 0
    
    if (arg1[8] s> 0)
        do
            void* esi = *(arg1[9] + (i_1 << 2))
            _free(*(esi + 4))
            _free(esi)
            i_1 += 1
        while (i_1 s< arg1[8])
    
    _free(arg1[9])
    int32_t i_2 = 0
    
    if (arg1[0xa] s> 0)
        do
            void* esi_1 = *(arg1[0xb] + (i_2 << 2))
            _free(*(esi_1 + 4))
            _free(*(esi_1 + 0xc))
            _free(*(esi_1 + 0x20))
            _free(esi_1)
            i_2 += 1
        while (i_2 s< arg1[0xa])
    
    _free(arg1[0xb])
    int32_t i_3 = 0
    int32_t i_9 = 0
    
    if (arg1[0xc] s> 0)
        do
            int32_t* eax_5 = *(arg1[0xd] + (i_3 << 2))
            int32_t* var_c_1 = eax_5
            void* j_4 = eax_5[5]
            
            if (j_4 != 0)
                void* j
                
                do
                    void* ecx = *(j_4 + 8)
                    j = *(j_4 + 0xc)
                    *(ecx + 0xc) -= 1
                    
                    if (*(ecx + 0xc) s<= 0)
                        (**(ecx + 8))(ecx)
                    
                    _free(*(j_4 + 4))
                    _free(j_4)
                    j_4 = j
                while (j != 0)
                eax_5 = var_c_1
            
            int32_t j_3 = 0x64
            void* ebx = &eax_5[6]
            int32_t j_5 = 0x64
            int32_t j_1
            
            do
                void* k_1 = *ebx
                
                if (k_1 != 0)
                    void* k
                    
                    do
                        k = *(k_1 + 4)
                        _free(k_1)
                        k_1 = k
                    while (k != 0)
                    j_3 = j_5
                
                ebx += 4
                j_1 = j_3
                j_3 -= 1
                j_5 = j_3
            while (j_1 != 1)
            void* esi_2 = var_c_1[1]
            _free(*(esi_2 + 8))
            _free(esi_2)
            void* esi_3 = var_c_1[2]
            _free(*(esi_3 + 8))
            _free(esi_3)
            void* esi_4 = var_c_1[3]
            _free(*(esi_4 + 8))
            _free(esi_4)
            void* esi_5 = var_c_1[4]
            _free(*(esi_5 + 8))
            _free(esi_5)
            _free(*var_c_1)
            _free(var_c_1)
            i_3 = i_9 + 1
            i_9 = i_3
        while (i_3 s< arg1[0xc])
    
    _free(arg1[0xd])
    int32_t i_4 = 0
    
    if (arg1[0xf] s> 0)
        do
            int32_t* esi_6 = *(arg1[0x10] + (i_4 << 2))
            _free(esi_6[4])
            _free(esi_6[3])
            _free(*esi_6)
            _free(esi_6)
            i_4 += 1
        while (i_4 s< arg1[0xf])
    
    _free(arg1[0x10])
    int32_t i_5 = 0
    int32_t i_10 = 0
    
    if (arg1[0x11] s> 0)
        do
            int32_t j_2 = 0
            int32_t* ebx_2 = *(arg1[0x12] + (i_5 << 2))
            
            if (ebx_2[2] s> 0)
                do
                    void* eax_11 = *(ebx_2[3] + (j_2 << 2))
                    (*(*(eax_11 + 4) + 8))(eax_11)
                    j_2 += 1
                while (j_2 s< ebx_2[2])
            
            _free(ebx_2[3])
            _free(*ebx_2)
            _free(ebx_2)
            i_5 = i_10 + 1
            i_10 = i_5
        while (i_5 s< arg1[0x11])
    
    _free(arg1[0x12])
    int32_t i_6 = 0
    
    if (arg1[0x13] s> 0)
        do
            int32_t* esi_7 = *(arg1[0x14] + (i_6 << 2))
            _free(*esi_7)
            _free(esi_7[4])
            _free(esi_7)
            i_6 += 1
        while (i_6 s< arg1[0x13])
    
    _free(arg1[0x14])
    int32_t i_7 = 0
    
    if (arg1[0x15] s> 0)
        do
            int32_t* esi_8 = *(arg1[0x16] + (i_7 << 2))
            _free(*esi_8)
            _free(esi_8[4])
            _free(esi_8)
            i_7 += 1
        while (i_7 s< arg1[0x15])
    
    _free(arg1[0x16])
    int32_t i_8 = 0
    
    if (arg1[0x17] s> 0)
        do
            int32_t* esi_9 = *(arg1[0x18] + (i_8 << 2))
            _free(*esi_9)
            _free(esi_9[4])
            _free(esi_9)
            i_8 += 1
        while (i_8 s< arg1[0x17])
    
    _free(arg1[0x18])
    _free(arg1[1])
    _free(*arg1)
    return _free(arg1)
}
