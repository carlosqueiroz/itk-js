/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef itkImageIOBaseJSBinding_hxx
#define itkImageIOBaseJSBinding_hxx

#include "itkImageIOBaseJSBinding.h"

namespace itk
{

template< typename TImageIO >
ImageIOBaseJSBinding< TImageIO >
::ImageIOBaseJSBinding()
{
  this->m_ImageIO = ImageIOType::New();
}


template< typename TImageIO >
void
ImageIOBaseJSBinding< TImageIO >
::SetNumberOfDimensions( unsigned int numberOfDimensions )
{
  this->m_ImageIO->SetNumberOfDimensions( numberOfDimensions );
}


template< typename TImageIO >
unsigned int
ImageIOBaseJSBinding< TImageIO >
::GetNumberOfDimensions() const
{
  return this->m_ImageIO->GetNumberOfDimensions();
}


template< typename TImageIO >
void
ImageIOBaseJSBinding< TImageIO >
::SetFileName(std::string fileName)
{
  this->m_ImageIO->SetFileName( fileName );
}


template< typename TImageIO >
std::string
ImageIOBaseJSBinding< TImageIO >
::GetFileName() const
{
  return this->m_ImageIO->GetFileName();
}


template< typename TImageIO >
bool
ImageIOBaseJSBinding< TImageIO >
::CanReadFile( std::string fileName )
{
  return this->m_ImageIO->CanReadFile( fileName.c_str() );
}


template< typename TImageIO >
void
ImageIOBaseJSBinding< TImageIO >
::ReadImageInformation()
{
  return this->m_ImageIO->ReadImageInformation();
}


template< typename TImageIO >
void
ImageIOBaseJSBinding< TImageIO >
::SetDimensions( unsigned int i, unsigned long dimension )
{
  this->m_ImageIO->SetDimensions( i, dimension );
}


template< typename TImageIO >
unsigned long
ImageIOBaseJSBinding< TImageIO >
::GetDimensions( unsigned int i ) const
{
  return this->m_ImageIO->GetDimensions(i);
}


template< typename TImageIO >
void
ImageIOBaseJSBinding< TImageIO >
::SetOrigin( unsigned int i, double dimension )
{
  this->m_ImageIO->SetOrigin( i, dimension );
}


template< typename TImageIO >
double
ImageIOBaseJSBinding< TImageIO >
::GetOrigin( unsigned int i ) const
{
  return this->m_ImageIO->GetOrigin(i);
}


template< typename TImageIO >
void
ImageIOBaseJSBinding< TImageIO >
::SetSpacing( unsigned int i, double dimension )
{
  this->m_ImageIO->SetSpacing( i, dimension );
}


template< typename TImageIO >
double
ImageIOBaseJSBinding< TImageIO >
::GetSpacing( unsigned int i ) const
{
  return this->m_ImageIO->GetSpacing(i);
}


} // end namespace itk

#endif
