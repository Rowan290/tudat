/*! \file environmentModel.h
 *    Header file that defines the base class for all environment models
 *    included in Tudat.
 *
 *    Path              : /Astrodynamics/EnvironmentModel/
 *    Version           : 2
 *    Check status      : Checked
 *
 *    Author            : K. Kumar
 *    Affiliation       : Delft University of Technology
 *    E-mail address    : K.Kumar@tudelft.nl
 *
 *    Checker           : J.C.P Melman
 *    Affiliation       : Delft University of Technology
 *    E-mail address    : J.C.P.Melman@tudelft.nl
 *
 *    Date created      : 14 September, 2010
 *    Last modified     : 12 October, 2010
 *
 *    References
 *
 *    Notes
 *
 *    Copyright (c) 2010 Delft University of Technology.
 *
 *    This software is protected by national and international copyright.
 *    Any unauthorized use, reproduction or modification is unlawful and
 *    will be prosecuted. Commercial and non-private application of the
 *    software in any form is strictly prohibited unless otherwise granted
 *    by the authors.
 *
 *    The code is provided without any warranty; without even the implied
 *    warranty of merchantibility or fitness for a particular purpose.
 *
 *    Changelog
 *      YYMMDD    author              comment
 *      100914    K. Kumar            File created.
 *      101012    K. Kumar            Minor comment changes.
 */

#ifndef ENVIRONMENTMODEL_H
#define ENVIRONMENTMODEL_H

// Include statements.
#include "linearAlgebra.h"
#include "basicMathematicsFunctions.h"

//! EnvironmentModel class.
/*!
 * Base class for all environment models included in Tudat.
 */
class EnvironmentModel
{
public:

    //! Default constructor.
    /*!
     * Default constructor.
     */
    EnvironmentModel( ){};

    //! Default destructor.
    /*!
     * Default destructor.
     */
    ~EnvironmentModel( ){};

protected:

private:
};

#endif // ENVIRONMENTMODEL_H

// End of file.