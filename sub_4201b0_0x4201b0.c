// 函数名称: sub_4201b0
// 虚拟地址: 0x4201b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4201b0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    var_8:3.b = arg1.b
    int32_t* ecx = data_6cfe4c
    void* eax
    
    if (ecx != 0)
        if (ecx[6] == 3)
            eax = ecx[5]
            void* edx_1 = data_aca0dc
            
            if (eax != 0)
                uint32_t esi_1 = zx.d(eax.w)
                
                if (esi_1 u< *(edx_1 + 4))
                    void* esi_3 = esi_1 * 0x4c + *edx_1
                    
                    if (*(esi_3 + 0x48) == eax)
                        int32_t var_10_1 = 0xf42b4
                        sub_48be40(eax, 1, esi_3 + 0x3c)
                        eax = sub_48bc20(&var_8:3, 1, esi_3 + 0x3c, &var_8:3)
                        ecx = data_6cfe4c
        
        if (ecx != 0)
            int32_t result = ecx[5]
            
            if (result != ecx[0x29b])
                ecx[0x29b] = result
                ecx[0x29c] = *ecx
                result = ecx[1]
                ecx[0x29d] = result
            
            ecx[0x29e] = 0x40a00000
            return result
    
    sub_489550(eax, &data_5b2591, "gClient", "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
        0x75, "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
