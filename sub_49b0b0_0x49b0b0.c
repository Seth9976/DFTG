// 函数名称: sub_49b0b0
// 虚拟地址: 0x49b0b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_49b0b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t edx = 0
    int32_t i = 0
    int32_t var_8_1 = 0
    
    if (arg1[1] s> 0)
        int32_t eax = *arg1
        int32_t* esi_1 = nullptr
        
        do
            int32_t* ecx = *(esi_1 + eax)
            
            if (ecx[5] == 0)
                *(*(esi_1 + *arg1) + 0x10) = sub_4e1990((**ecx)(), 0)
                void* edx_1 = *(esi_1 + *arg1)
                int32_t ecx_5 = *(edx_1 + 0x10) & 0x8000001f
                
                if (ecx_5 s< 0)
                    ecx_5 = ((ecx_5 - 1) | 0xffffffe0) + 1
                
                int32_t eax_5 = 1 << ecx_5.b
                
                if (eax_5 == 0)
                    sub_489550(eax_5, &data_5b2591, "result != 0", "d:\ax\trunk\ax2017\engine\ui2.cpp", 
                        0xcd5, "CrcToBloom")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                *(edx_1 + 0x14) = eax_5
                eax = *arg1
                edx = var_8_1
            
            int32_t ecx_8 = *(esi_1 + eax)
            i += 1
            esi_1 = &esi_1[7]
            edx |= *(ecx_8 + 0x14)
            var_8_1 = edx
        while (i s< arg1[1])
    
    arg1[2] = edx
}
