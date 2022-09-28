namespace Errusiera
{
    /// <summary>
    /// Падежи
    /// </summary>
    public enum Cases
    {
        /// <summary>
        /// <para>RUS: Нет падежа или неизвестен. Не используйте сами этот падеж</para>
        /// <para>ENG: No case or case is unknown. Please do not use it by your own</para>
        /// </summary>
        None,
        /// <summary>
        /// Именительный падеж
        /// </summary>
        Nominative,
        /// <summary>
        /// Родительный падеж
        /// </summary>
        Genetive,
        /// <summary>
        /// Дательный падеж
        /// </summary>
        Dative,
        /// <summary>
        /// Винительный падеж
        /// </summary>
        Accusative,
        /// <summary>
        /// Творительный падеж
        /// </summary>
        Instrumental,
        /// <summary>
        /// Предложный падеж
        /// </summary>
        Prepositional
    };

    /// <summary>
    /// Числа
    /// </summary>
    public enum Number
    {
        /// <summary>
        /// <para>RUS: Нет числа или неизвестно. Не используйте сами этот параметр</para>
        /// <para>ENG: No number or number is unknown. Please do not use it by your own</para>
        /// </summary>
        None,
        /// <summary>
        /// Единственное число
        /// </summary>
        Singular,
        /// <summary>
        /// Паукальное (двойственное) число
        /// </summary>
        Paucal,
        /// <summary>
        /// Множественное число
        /// </summary>
        Plural
    };

    /// <summary>
    /// Рода
    /// </summary>
    public enum Gender
    {
        /// <summary>
        /// Род неизвестен
        /// </summary>
        None,
        /// <summary>
        /// Мужской род
        /// </summary>
        Masculine,
        /// <summary>
        /// Женский род
        /// </summary>
        Feminine,
        /// <summary>
        /// Средний род
        /// </summary>
        Neuter
    };

    /// <summary>
    /// Одушевлённость
    /// </summary>
    public enum Animacy
    {
        /// <summary>
        /// Неизвестно
        /// </summary>
        None,
        /// <summary>
        /// Одушевлённое
        /// </summary>
        Animate,
        /// <summary>
        /// Неодушевлённое
        /// </summary>
        Inanimate
    };

    /// <summary>
    /// Предлоги
    /// </summary>
    public enum Prepositions
    {
        /// <summary>
        /// С
        /// </summary>
        With,
        /// <summary>
        /// В
        /// </summary>
        In,
        /// <summary>
        /// К
        /// </summary>
        To,
        /// <summary>
        /// О
        /// </summary>
        About,
        /// <summary>
        /// У
        /// </summary>
        Nearby,
        /// <summary>
        /// От
        /// </summary>
        From,
        /// <summary>
        /// Из
        /// </summary>
        Out,
        /// <summary>
        /// Над
        /// </summary>
        Above,
        /// <summary>
        /// Под
        /// </summary>
        Under,
        /// <summary>
        /// Для
        /// </summary>
        For,
        /// <summary>
        /// Без
        /// </summary>
        Without,
        /// <summary>
        /// На
        /// </summary>
        On,
        /// <summary>
        /// По
        /// </summary>
        Upon
    };

    public enum LetterCases
    {
        /// <summary>
        /// Как в предложениях
        /// </summary>
        SentenceCase,
        Lowercase,
        Uppercase,
        CapitalizeEachWord
    }
}