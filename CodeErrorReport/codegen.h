#ifndef CODEGEN_H
#define CODEGEN_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "treeNodes.h"
#include "treeUtils.h"
#include "symbolTable.h"
#include "emitcode.h"

/*
 * @brief top level code generator call
 */
void codegen(FILE *codeIn, char *srcFile, TreeNode *syntaxTree, 
      SymbolTable *globalsIn, int globalOffset, bool linenumFlagIn);

#endif
