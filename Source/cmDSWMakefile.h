/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    $RCSfile$
  Language:  C++
  Date:      $Date$
  Version:   $Revision$


  Copyright (c) 2000 National Library of Medicine
  All rights reserved.

  See COPYRIGHT.txt for copyright details.

=========================================================================*/
/**
 * cmDSWMakefile - class to write a microsoft DSW file.
 */
#ifndef cmDSWMakefile_h
#define cmDSWMakefile_h
#ifdef _MSC_VER
#pragma warning ( disable : 4786 )
#endif

#include "cmMakefile.h"
#include <vector>
class cmDSPMakefile;


class cmDSWMakefile : public cmMakefile
{
public:
  virtual void OutputDSWFile();
private:
  void FindAllCMakeListsFiles(const char* subdir,
			      std::vector<cmDSPMakefile*>&);
  void WriteDSWFile(std::ostream& fout);
  void WriteDSWHeader(std::ostream& fout);
  void WriteProject(std::ostream& fout, 
		     const char* name, const char* path);
  void WriteDSWFooter(std::ostream& fout);
};

#endif
