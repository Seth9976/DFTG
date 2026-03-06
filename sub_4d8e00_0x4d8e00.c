// 函数名称: sub_4d8e00
// 虚拟地址: 0x4d8e00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_4d8e00(void** arg1, char* arg2)
{
    // 第一条实际指令: uint32_t eax = _fopen(arg2, "rb")
    uint32_t eax = _fopen(arg2, "rb")
    int32_t* esi = eax
    int32_t var_14_1
    char const* const ecx
    
    if (esi != 0)
        _fseek(esi, 0, 2)
        int32_t* var_1c_1 = esi
        char* result = sub_587c01()
        _fseek(esi, 0, 0)
        void* eax_2 = sub_4c2e40(result) + 1
        *arg1 = eax_2
        eax = _fread(eax_2, 1, result, esi)
        
        if (eax == result)
            _fclose(esi)
            *(result + *arg1) = 0
            return result
        
        char const* const var_10_2 = "DefinitionReadFileStr"
        var_14_1 = 0x157
        ecx = "result == fileSize"
    else
        char const* const var_10 = "DefinitionReadFileStr"
        var_14_1 = 0x14f
        ecx = "file"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\spine.cpp", var_14_1, 
        "DefinitionReadFileStr")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
