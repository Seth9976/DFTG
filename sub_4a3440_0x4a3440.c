// 函数名称: sub_4a3440
// 虚拟地址: 0x4a3440
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4a3440(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0
    int32_t var_8 = 0
    int32_t result = 0x3e8
    
    if (arg2 s> 0)
        void* ebx_1 = arg1 + 0x14
        int32_t eax_20
        
        do
            void* edi_1 = ebx_1 - 0xc
            result = sub_4e1990((***(ebx_1 - 0x14))(), result)
            int32_t i_4 = 4
            int32_t i
            
            do
                char eax_4 = *edi_1
                edi_1 += 1
                result = result u>> 8 ^ *(((zx.d(eax_4) ^ zx.d(result.b)) << 2) + &data_5d2c60)
                i = i_4
                i_4 -= 1
            while (i != 1)
            void* ecx_2 = ebx_1
            int32_t i_5 = 4
            int32_t i_1
            
            do
                char eax_7 = *ecx_2
                ecx_2 += 1
                result = result u>> 8 ^ *(((zx.d(eax_7) ^ zx.d(result.b)) << 2) + &data_5d2c60)
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            void* ecx_3 = ebx_1 - 0x10
            int32_t i_6 = 4
            int32_t i_2
            
            do
                char eax_10 = *ecx_3
                ecx_3 += 1
                result = result u>> 8 ^ *(((zx.d(eax_10) ^ zx.d(result.b)) << 2) + &data_5d2c60)
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
            int32_t eax_13 = *(ebx_1 - 0xc)
            
            if (eax_13 != 0)
                if (eax_13 == 3)
                    int32_t eax_17 = *(ebx_1 - 8)
                    
                    if (eax_17 == 0)
                        sub_489550(eax_17, &data_5b2591, "base", "d:\ax\trunk\ax2017\engine\ui2.cpp", 
                            0x531, "StringLinear::GetString")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    result = sub_4e1990(*(ebx_1 - 4) + *eax_17, result)
                else
                    void* ecx_4 = ebx_1 + 4
                    int32_t i_7 = 4
                    int32_t i_3
                    
                    do
                        char eax_14 = *ecx_4
                        ecx_4 += 1
                        result = result u>> 8 ^ *(((zx.d(eax_14) ^ zx.d(result.b)) << 2) + &data_5d2c60)
                        i_3 = i_7
                        i_7 -= 1
                    while (i_3 != 1)
            
            ebx_1 += 0x1c
            eax_20 = var_8 + 1
            var_8 = eax_20
        while (eax_20 s< arg2)
    
    return result
}
