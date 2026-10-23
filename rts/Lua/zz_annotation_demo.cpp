/* Demo of the Lua doc annotations on a PR. Not for merging. */

// ---- lua-doc-extractor warnings ----

/***
 * A doc with only a description isn't attached to anything.
 */

/***
 * @function Spring.DemoMultiLineParam
 * @param unitID integer The unit to use.
 *   A second line here isn't part of the param's description in emmylua.
 */

/***
 * @class DemoTextBelowField
 * @field speed number
 * Text below a field belongs to the next tag in emmylua.
 * @field range number The range, in elmos.
 */

// ---- lua-doc-extractor errors ----

/***
 * @function Spring.DemoInType
 * @param velX number in elmos/frame
 */

/***
 * @function Spring.DemoMinusType
 * @param teamID integer - the team to use
 */

/***
 * @function Spring.DemoParamName
 * @param fun(unitID: integer) callback
 */

// ---- Lua Language Server problems, reported at the C++ line ----

/***
 * @function Spring.DemoUnknownTypes
 * @param unitID NoSuchUnitType
 * @return NoSuchResultType result
 */

/***
 * @class DemoUnknownFieldType
 * @field target NoSuchTargetType
 */
